# Install script for directory: /home/kunq/smartnic_infra_sim/gvsoc/core

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/kunq/smartnic_infra_sim/gvsoc/install")
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

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE DIRECTORY MESSAGE_LAZY FILES "/home/kunq/smartnic_infra_sim/gvsoc/core/bin/" USE_SOURCE_PERMISSIONS)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/kunq/smartnic_infra_sim/gvsoc/build/core/dpi-wrapper/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/kunq/smartnic_infra_sim/gvsoc/build/core/engine/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/kunq/smartnic_infra_sim/gvsoc/build/core/models/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/kunq/smartnic_infra_sim/gvsoc/build/core/pulp/models/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/models" TYPE FILE MESSAGE_LAZY RENAME "gen_memory_memory_cpp_105025602.so" FILES "/home/kunq/smartnic_infra_sim/gvsoc/build/core/gen_memory_memory_cpp_105025602_optim.so")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/models/profile" TYPE FILE MESSAGE_LAZY RENAME "gen_memory_memory_cpp_105025602.so" FILES "/home/kunq/smartnic_infra_sim/gvsoc/build/core/gen_memory_memory_cpp_105025602_profile.so")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/models/debug" TYPE FILE MESSAGE_LAZY RENAME "gen_memory_memory_cpp_105025602.so" FILES "/home/kunq/smartnic_infra_sim/gvsoc/build/core/gen_memory_memory_cpp_105025602_debug.so")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/models" TYPE FILE MESSAGE_LAZY RENAME "gen_memory_memory_cpp_149327240.so" FILES "/home/kunq/smartnic_infra_sim/gvsoc/build/core/gen_memory_memory_cpp_149327240_optim.so")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/models/profile" TYPE FILE MESSAGE_LAZY RENAME "gen_memory_memory_cpp_149327240.so" FILES "/home/kunq/smartnic_infra_sim/gvsoc/build/core/gen_memory_memory_cpp_149327240_profile.so")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/models/debug" TYPE FILE MESSAGE_LAZY RENAME "gen_memory_memory_cpp_149327240.so" FILES "/home/kunq/smartnic_infra_sim/gvsoc/build/core/gen_memory_memory_cpp_149327240_debug.so")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/models" TYPE FILE MESSAGE_LAZY RENAME "gen_interco_router_router_common_cpp_59666758.so" FILES "/home/kunq/smartnic_infra_sim/gvsoc/build/core/gen_interco_router_router_common_cpp_59666758_optim.so")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/models/profile" TYPE FILE MESSAGE_LAZY RENAME "gen_interco_router_router_common_cpp_59666758.so" FILES "/home/kunq/smartnic_infra_sim/gvsoc/build/core/gen_interco_router_router_common_cpp_59666758_profile.so")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/models/debug" TYPE FILE MESSAGE_LAZY RENAME "gen_interco_router_router_common_cpp_59666758.so" FILES "/home/kunq/smartnic_infra_sim/gvsoc/build/core/gen_interco_router_router_common_cpp_59666758_debug.so")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/models" TYPE FILE MESSAGE_LAZY RENAME "gen_isa_rv64imafdc_80149279_cpp_225095802.so" FILES "/home/kunq/smartnic_infra_sim/gvsoc/build/core/gen_isa_rv64imafdc_80149279_cpp_225095802_optim.so")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/models/profile" TYPE FILE MESSAGE_LAZY RENAME "gen_isa_rv64imafdc_80149279_cpp_225095802.so" FILES "/home/kunq/smartnic_infra_sim/gvsoc/build/core/gen_isa_rv64imafdc_80149279_cpp_225095802_profile.so")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/models/debug" TYPE FILE MESSAGE_LAZY RENAME "gen_isa_rv64imafdc_80149279_cpp_225095802.so" FILES "/home/kunq/smartnic_infra_sim/gvsoc/build/core/gen_isa_rv64imafdc_80149279_cpp_225095802_debug.so")
endif()

