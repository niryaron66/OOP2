cmake_minimum_required(VERSION 3.21)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled src/main.cpp include/Person.h src/Person.cpp include/Florist.h include/Wholesaler.h include/Grower.h include/Gardener.h "include/FlowerArranger.h" include/DeliveryPerson.h include/FlowersBouquet.h src/Florist.cpp src/Wholesaler.cpp src/Grower.cpp src/Gardener.cpp src/FlowerArranger.cpp src/DeliveryPerson.cpp src/FlowersBouquet.cpp)
