# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appFirst_QtQmlApp_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appFirst_QtQmlApp_autogen.dir\\ParseCache.txt"
  "appFirst_QtQmlApp_autogen"
  )
endif()
