file(GLOB URDF_FILES "${CMAKE_CURRENT_SOURCE_DIR}/*.urdf")
file(GLOB COMMON_FILES "${CMAKE_CURRENT_SOURCE_DIR}/*.h")

file(COPY ${URDF_FILES} 
     DESTINATION ${CMAKE_CURRENT_BINARY_DIR}
)
file(COPY ${COMMON_FILES} 
     DESTINATION ${CMAKE_CURRENT_BINARY_DIR}
)

add_subdirectory(test_base_info)
add_subdirectory(test_forward)
add_subdirectory(test_inverse)
add_subdirectory(test_convert)