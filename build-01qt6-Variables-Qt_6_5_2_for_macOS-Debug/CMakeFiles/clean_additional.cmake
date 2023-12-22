# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "01qt6-Variables_autogen"
  "CMakeFiles/01qt6-Variables_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/01qt6-Variables_autogen.dir/ParseCache.txt"
  )
endif()
