# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appSongplayer_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appSongplayer_autogen.dir\\ParseCache.txt"
  "appSongplayer_autogen"
  )
endif()
