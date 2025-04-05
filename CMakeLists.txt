cmake_minimum_required(VERSION 3.21)
project(LoRADS_v_2_0_1-alpha C)
set(CMAKE_C_STANDARD 11)

set(MODE "DYNAMIC")
if (APPLE)
    add_compile_definitions(MAC_INT64)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O3")
elseif (UNIX)
    add_compile_definitions(UNIX_INT64)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O3")
else()
    add_compile_definitions(MAC_INT64 __WIN32)
endif()
find_library(BLAS_LIBRARIES NAMES libblastrampoline-5)
set(CMAKE_BUILD_TYPE Release)
#set(CMAKE_BUILD_TYPE Debug)
include_directories(externals
      src_semi
      src_semi/data
      src_semi/lorads_alg
      src_semi/linalg
      src_semi/io
)
file(GLOB SOURCES src_semi/*.c src_semi/data/*.c src_semi/linalg/*.c src_semi/lorads_alg/*.c externals/*.c src_semi/io/*.c)
file(GLOB HEADERS src_semi/*.h src_semi/data/*.h src_semi/linalg/*.h src_semi/lorads_alg/*.h externals/*.h src_semi/io/*.h)
add_library(LoRADS_v_2_0_1-alpha SHARED
      ${SOURCES}
      ${HEADERS}
)
target_link_libraries(LoRADS_v_2_0_1-alpha
    PRIVATE ${BLAS_LIBRARIES})