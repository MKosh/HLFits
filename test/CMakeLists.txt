add_executable(test1 test1.cxx)

target_link_libraries(test1 PUBLIC
  cfitsio
  HLFits
)

target_include_directories(test1 PUBLIC
  ${CMAKE_SOURCE_DIR}/src
)
