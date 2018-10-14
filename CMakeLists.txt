cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(NNet-assistant CXX)
SET (CMAKE_BUILD_TYPE "Release")
find_package(CxxTest)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CTEST_OUTPUT_ON_FAILURE ON)


set(BUILD_PACH "build/")

set(TEST_INC AutoUnitTests.cpp)

set(TEST_EXEC AutoUnitTests)
set(PROG_EXEC main)

set(PROJ_OBJ proj_obj)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${BUILD_PACH})

file(GLOB TEST_SRC "test/*.h")
file(GLOB PROG_SRC "src/*.cpp")

if(CXXTEST_FOUND)
    include_directories(${CXXTEST_INCLUDE_DIR})
    enable_testing()

    CXXTEST_ADD_TEST(${TEST_EXEC} ${TEST_INC} ${TEST_SRC})
    add_library(${PROJ_OBJ} SHARED ${PROG_SRC})

    target_link_libraries(${TEST_EXEC} ${PROJ_OBJ}) # as needed

    add_custom_target(test_output ${CMAKE_COMMAND} -E env CTEST_OUTPUT_ON_FAILURE=1
                  ${CMAKE_CTEST_COMMAND} -C $<CONFIG> --verbose
                  ${TEST_EXEC} ${PROJ_OBJ} ${CMAKE_BINARY_DIR})

endif()

add_executable(${PROG_EXEC} ${PROG_SRC})
