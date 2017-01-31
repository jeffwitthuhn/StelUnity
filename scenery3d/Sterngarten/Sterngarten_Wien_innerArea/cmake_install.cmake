# Install script for directory: C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/scenery3d/Sterngarten/Sterngarten_Wien_innerArea

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stellarium/scenery3d/Sterngarten/Sterngarten_Wien_innerArea" TYPE FILE FILES
    "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/scenery3d/Sterngarten/Sterngarten_Wien_innerArea/abedul.png"
    "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/scenery3d/Sterngarten/Sterngarten_Wien_innerArea/Concrete_White.jpg"
    "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/scenery3d/Sterngarten/Sterngarten_Wien_innerArea/Fencing_Mesh.png"
    "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/scenery3d/Sterngarten/Sterngarten_Wien_innerArea/Google_Earth_Snapshot_1.jpg"
    "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/scenery3d/Sterngarten/Sterngarten_Wien_innerArea/hawthorne.png"
    "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/scenery3d/Sterngarten/Sterngarten_Wien_innerArea/Metal_Aluminum_Anodized.jpg"
    "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/scenery3d/Sterngarten/Sterngarten_Wien_innerArea/Metal_Brushed.jpg"
    "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/scenery3d/Sterngarten/Sterngarten_Wien_innerArea/Metal_Corrogated_Shiny_90.jpg"
    "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/scenery3d/Sterngarten/Sterngarten_Wien_innerArea/Metal_Rough.jpg"
    "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/scenery3d/Sterngarten/Sterngarten_Wien_innerArea/Metal_Seamed.jpg"
    "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/scenery3d/Sterngarten/Sterngarten_Wien_innerArea/Tafel_Sterngarten.jpg"
    "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/scenery3d/Sterngarten/Sterngarten_Wien_innerArea/Tafel_Wienplan.jpg"
    "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/scenery3d/Sterngarten/Sterngarten_Wien_innerArea/Ungeziffer.png"
    "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/scenery3d/Sterngarten/Sterngarten_Wien_innerArea/Vegetation_Bark_Birch1.jpg"
    "C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/scenery3d/Sterngarten/Sterngarten_Wien_innerArea/Vegetation_Juniper2.jpg"
    )
endif()

