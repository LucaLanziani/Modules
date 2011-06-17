cmake_minimum_required(VERSION 2.6)

INCLUDE_DIRECTORIES(../../shared_libs)
INCLUDE_DIRECTORIES(../../core_libs)
INCLUDE_DIRECTORIES(../../cloud_libs)
INCLUDE_DIRECTORIES(../../old_core/sensor)

SET(lib_src terzo.c)
ADD_DEFINITIONS(-fPIC)

ADD_LIBRARY(terzo MODULE ${lib_src})
