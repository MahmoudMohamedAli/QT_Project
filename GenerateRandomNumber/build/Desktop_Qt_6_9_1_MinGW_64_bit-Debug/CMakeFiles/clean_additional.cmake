# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appGenerateRandomNumber_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appGenerateRandomNumber_autogen.dir\\ParseCache.txt"
  "appGenerateRandomNumber_autogen"
  )
endif()
