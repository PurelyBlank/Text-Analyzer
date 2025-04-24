cmake_minimum_required(VERSION 4.0.1)

set(text_analyzer text_analyzer)
project(${text_analyzer} CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SRC_FILES
    src/text_analyzer.h
    src/text_analyzer.cpp
)

add_executable(text_analyzer
    ${SRC_FILES}
    src/main.cpp
)    


##### TESTING CONFIGUATIONS #####
include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/6910c9d9165801d8827d628cb72eb7ea9dd538c5.zip
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(tests
    test/gtestmain.cpp
    test/text_analyzer_gtest.cpp
)

target_link_libraries(tests
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(tests)
