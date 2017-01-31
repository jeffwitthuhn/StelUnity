# Install script for directory: C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/plugins/RemoteControl

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/.stellarium")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stellarium/webroot" TYPE DIRECTORY FILES "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/plugins/RemoteControl/webroot/" FILES_MATCHING REGEX "/[^/]*\\.png$" REGEX "/[^/]*\\.gif$" REGEX "/[^/]*\\.html$" REGEX "/[^/]*\\.js$" REGEX "/[^/]*\\.css$" REGEX "/[^/]*\\.eot$" REGEX "/[^/]*\\.svg$" REGEX "/[^/]*\\.ttf$" REGEX "/[^/]*\\.woff$" REGEX "/[^/]*\\.woff2$" REGEX "/translate\\_files$" REGEX "/[^/]*\\.ico$")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/plugins/RemoteControl/src/cmake_install.cmake")

endif()

