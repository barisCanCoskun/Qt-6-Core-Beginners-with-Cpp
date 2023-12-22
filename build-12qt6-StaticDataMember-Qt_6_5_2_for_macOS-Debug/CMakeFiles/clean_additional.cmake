# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "12qt6-StaticDataMember_autogen"
  "CMakeFiles/12qt6-StaticDataMember_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/12qt6-StaticDataMember_autogen.dir/ParseCache.txt"
  )
endif()
