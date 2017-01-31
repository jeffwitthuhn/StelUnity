# Install script for directory: C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/src/Debug")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES
    "C:/Program Files (x86)/Microsoft Visual Studio 12.0/VC/redist/x86/Microsoft.VC120.CRT/msvcp120.dll"
    "C:/Program Files (x86)/Microsoft Visual Studio 12.0/VC/redist/x86/Microsoft.VC120.CRT/msvcr120.dll"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/data/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/src/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/textures/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/doc/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/po/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/landscapes/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/skycultures/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/nebulae/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/scripts/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/scenery3d/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/stars/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/plugins/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
