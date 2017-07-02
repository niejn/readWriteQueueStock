cmake_minimum_required(VERSION 3.7)
project(readWriteQueueStock)

set(CMAKE_CXX_STANDARD 11)
SET(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} " -pthread")
set(SOURCE_FILES main.cpp udpSender.h udpSender.cpp tickGenerator.h tickGenerator.cpp threadsafeStack.h)
add_executable(readWriteQueueStock ${SOURCE_FILES})