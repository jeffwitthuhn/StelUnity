# Install script for directory: C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/landscapes

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/landscapes/guereins/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/landscapes/trees/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/landscapes/moon/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/landscapes/hurricane/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/landscapes/ocean/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/landscapes/garching/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/landscapes/mars/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/landscapes/jupiter/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/landscapes/saturn/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/landscapes/uranus/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/landscapes/neptune/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/landscapes/grossmugl/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/landscapes/geneva/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/landscapes/zero/cmake_install.cmake")

endif()

