# Install script for directory: C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/skycultures

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
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/skycultures/arabic/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/skycultures/arabic_moon_stations/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/skycultures/aztec/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/skycultures/boorong/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/skycultures/chinese/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/skycultures/dakota/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/skycultures/egyptian/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/skycultures/inuit/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/skycultures/indian/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/skycultures/japanese_moon_stations/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/skycultures/kamilaroi/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/skycultures/korean/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/skycultures/macedonian/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/skycultures/maori/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/skycultures/mongolian/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/skycultures/navajo/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/skycultures/norse/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/skycultures/ojibwe/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/skycultures/polynesian/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/skycultures/romanian/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/skycultures/sami/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/skycultures/sardinian/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/skycultures/siberian/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/skycultures/tongan/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/skycultures/tukano/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/skycultures/tupi/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/skycultures/western/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/skycultures/western_rey/cmake_install.cmake")

endif()

