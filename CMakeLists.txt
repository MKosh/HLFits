cmake_minimum_required(VERSION 3.22)
set(CMAKE_EXPORT_COMPILE_COMMANDS on)
project(HLFits VERSION 0.1.0 LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

FetchContent_Declare(
  cfitsio
  GIT_REPOSITORY https://github.com/HEASARC/cfitsio.git
  GIT_TAG cfitsio4_5_0_20240826
)

FetchContent_MakeAvailable(cfitsio)

add_subdirectory(src)
add_subdirectory(test)
