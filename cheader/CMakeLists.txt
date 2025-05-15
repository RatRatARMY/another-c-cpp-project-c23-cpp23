add_library(mathlibcc++ SHARED
        library1_c.h
        library1_c.c
)
target_include_directories(mathlibcc++ PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})