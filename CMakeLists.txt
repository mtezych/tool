
cmake_minimum_required (VERSION 3.11)


add_library                (tool STATIC)

target_include_directories (tool PUBLIC include)

target_compile_features    (tool PUBLIC cxx_std_14)

target_sources             (tool PRIVATE include/tool/Tool.h
                                               source/Tool.cxx)

target_link_libraries      (tool PRIVATE util)
