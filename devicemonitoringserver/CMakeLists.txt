cmake_minimum_required(VERSION 3.12)
set(CMAKE_CXX_STANDARD 17)
project(devicemonitoringserver CXX)

FILE(GLOB SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/*.h ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
                  ${CMAKE_CURRENT_SOURCE_DIR}/handlers/*.h ${CMAKE_CURRENT_SOURCE_DIR}/handlers/*.cpp
                  ${CMAKE_CURRENT_SOURCE_DIR}/server/*.h ${CMAKE_CURRENT_SOURCE_DIR}/server/*.cpp
				  ${CMAKE_CURRENT_SOURCE_DIR}/servermock/*.h ${CMAKE_CURRENT_SOURCE_DIR}/servermock/*.cpp
                  ${CMAKE_CURRENT_SOURCE_DIR}/message/*.h ${CMAKE_CURRENT_SOURCE_DIR}/message/*.cpp
                  ${CMAKE_CURRENT_SOURCE_DIR}/messageprocessors/*.h ${CMAKE_CURRENT_SOURCE_DIR}/messageprocessors/*.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
install(TARGETS ${PROJECT_NAME} DESTINATION ${CMAKE_INSTALL_BINDIR} COMPONENT ${PROJECT_NAME})
