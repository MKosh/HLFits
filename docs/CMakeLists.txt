set(DOXYGEN_GENERATE_HTML YES)
set(DOXYGEN_GENERATE_LATEX NO)
set(DOXYGEN_CREATE_SUBDIRS YES)
set(DOXYGEN_HTML_OUTPUT ${CMAKE_BINARY_DIR}/html)
set(DOXYGEN_GENERATE_TREEVIEW YES)
set(DOXYGEN_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(DOXYGEN_PROJECT_NAME "HLFits")
set(DOXYGEN_PROJECT_NAME 0.1.0)
doxygen_add_docs(docs ${CMAKE_SOURCE_DIR}/src COMMENT "Generating Doxygen documentation")
