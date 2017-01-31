# Install script for directory: C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/plugins

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
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/plugins/ArchaeoLines/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/plugins/CompassMarks/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/plugins/Exoplanets/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/plugins/EquationOfTime/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/plugins/FOV/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/plugins/MeteorShowers/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/plugins/NavStars/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/plugins/Novae/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/plugins/Observability/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/plugins/Oculars/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/plugins/PointerCoordinates/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/plugins/Pulsars/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/plugins/Quasars/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/plugins/RemoteControl/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/plugins/Satellites/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/plugins/Scenery3d/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/plugins/SolarSystemEditor/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/plugins/Supernovae/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/plugins/TextUserInterface/cmake_install.cmake")
  include("C:/Users/VizLab/Desktop/stellarium/stellarium-0.15.1/builds/msvc2013/plugins/TelescopeControl/cmake_install.cmake")

endif()

