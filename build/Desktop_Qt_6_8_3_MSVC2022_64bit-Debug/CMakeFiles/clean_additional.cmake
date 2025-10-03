# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Humidity_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Humidity_autogen.dir\\ParseCache.txt"
  "Humidity_autogen"
  )
endif()
