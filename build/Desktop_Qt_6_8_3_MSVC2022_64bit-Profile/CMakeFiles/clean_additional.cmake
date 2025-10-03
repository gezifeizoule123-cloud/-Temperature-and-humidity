# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "RelWithDebInfo")
  file(REMOVE_RECURSE
  "CMakeFiles\\Humidity_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Humidity_autogen.dir\\ParseCache.txt"
  "Humidity_autogen"
  )
endif()
