# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appSimpleButtonApp_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appSimpleButtonApp_autogen.dir\\ParseCache.txt"
  "appSimpleButtonApp_autogen"
  )
endif()
