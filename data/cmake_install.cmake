# Install script for directory: C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/data

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stellarium/data" TYPE FILE FILES
    "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/data/ssystem.ini"
    "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/data/ssystem_1000comets.ini"
    "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/data/base_locations.bin.gz"
    "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/data/DejaVuSans.ttf"
    "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/data/default_config.ini"
    "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/data/DejaVuSansMono.ttf"
    "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/data/iso639-1.utf8"
    "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/data/iso3166.tab"
    "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/data/countryCodes.dat"
    "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/data/constellations_boundaries.dat"
    "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/data/constellations_spans.dat"
    )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stellarium/data" TYPE FILE RENAME "stellarium.ico" FILES "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/data/stellarium.ico")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stellarium/data" TYPE FILE RENAME "splash.png" FILES "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/data/splash.png")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stellarium/data/shaders" TYPE DIRECTORY FILES "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/data/shaders/" FILES_MATCHING REGEX "/s3d\\_[^/]*\\.vert$" REGEX "/s3d\\_[^/]*\\.geom$" REGEX "/s3d\\_[^/]*\\.frag$")
endif()

