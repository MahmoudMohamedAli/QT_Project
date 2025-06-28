# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\My_Simple_Notepad_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\My_Simple_Notepad_autogen.dir\\ParseCache.txt"
  "My_Simple_Notepad_autogen"
  )
endif()
