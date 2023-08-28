cmake_minimum_required(VERSION 3.20)
project(forsnusolo-dev)

set(CMAKE_CXX_STANDARD 14)

add_executable(forsnusolo-dev main.cpp car.cpp car.h Serial.cpp SerialClass.h)
