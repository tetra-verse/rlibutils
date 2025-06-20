#pragma once

#include "data.h"
#include "macro.h"
#include <memory>
#include <rl/mdl/Model.h>
#include <string>

namespace roblib {
class RLIB_API ModelUtils {
public:
    static bool isUrdfFile(const std::string& file_path);
    static bool isXmlFile(const std::string& file_path);

    // load model form file
    static std::shared_ptr<rl::mdl::Model> getModelFromUrdf(const ::std::string& model_file_path);
    static std::shared_ptr<rl::mdl::Model> getModelFromXml(const ::std::string& model_file_path);

    static rl::math::Transform xyzQuat2RlTransfrom(const xyzWithQuaternion& in);
    static xyzWithQuaternion rlTransform2XyzQuat(const rl::math::Transform& in);

    static rl::math::Transform xyzEuler2RlTransfrom(const xyzWithEuler& in);
    static xyzWithEuler rlTransform2XyzEuler(const rl::math::Transform& in);

    static Euler quaternion2Euler(const Quaternion& quat);
    static Quaternion euler2Quaternion(const Euler& euler);
};
}
