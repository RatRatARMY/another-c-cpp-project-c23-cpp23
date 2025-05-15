add_library(mathlibc++ SHARED
        library1_cpp.hpp
        library1_cpp.cpp
)
target_include_directories(mathlibc++ PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})