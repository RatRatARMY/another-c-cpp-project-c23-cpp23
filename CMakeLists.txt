cmake_minimum_required(VERSION 3.31)
project(another_test_c_cpp_23 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_C_STANDARD 23)
add_subdirectory(cheader)
add_subdirectory(cppheader)
add_executable(main_exec main.cpp)
target_link_libraries(main_exec PRIVATE
        mathlibcc++
        mathlibc++
)
add_executable(main_exec_lambdamode main.cpp)
target_link_libraries(main_exec_lambdamode PRIVATE
        mathlibcc++
        mathlibc++
)
add_executable(main_exec_const_char_ptr_mode main.cpp)
add_executable(main_exec_std_string_mode main.cpp)
add_executable(main_exec_char_list_mode main.cpp)
add_executable(main_exec_another_number_mode main.cpp)
add_executable(main_exec_constexpr_mode main.cpp)
add_executable(main_exec_no_include_mode main.cpp)
add_executable(main_exec_check_argv_argc_mode main.cpp)
target_compile_definitions(main_exec PRIVATE NUMBER_MODE)
target_compile_definitions(main_exec_lambdamode PRIVATE NUMBER_MODE LAMBDA_MODE)
target_compile_definitions(main_exec_const_char_ptr_mode PRIVATE CONST_CHAR_PTR_MODE)
target_compile_definitions(main_exec_std_string_mode PRIVATE STD_STRING_MODE)
target_compile_definitions(main_exec_char_list_mode PRIVATE CHAR_LIST_MODE)
target_compile_definitions(main_exec_another_number_mode PRIVATE ANOTHER_NUMBER_MODE)
target_compile_definitions(main_exec_constexpr_mode PRIVATE CONSTEXPR_MODE)
target_compile_definitions(main_exec_check_argv_argc_mode PRIVATE CHECK_ARGV_ARGC_MODE)