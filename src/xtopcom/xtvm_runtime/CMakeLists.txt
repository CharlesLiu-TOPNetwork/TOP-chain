add_compile_options(-Wpedantic)

aux_source_directory(./src src_dir)
add_library(xtvm_runtime STATIC ${src_dir})

add_dependencies(xtvm_runtime tvm_engine)
get_target_property(TVM_ENGINE_DIR tvm_engine LOCATION)
target_link_libraries(xtvm_runtime PRIVATE ${TVM_ENGINE_DIR}/libxevm_engine.a)

add_dependencies(xtvm_runtime xevm_common xbasic xcommon)

target_link_libraries(xtvm_runtime PRIVATE xevm_common xbasic xcommon)
