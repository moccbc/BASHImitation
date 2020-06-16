CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(rshell
    src/main.cpp
)

ADD_EXECUTABLE(cleaner_test
    unit_tests/cleaner_ut.cpp
)

TARGET_LINK_LIBRARIES(cleaner_test gtest)
TARGET_COMPILE_DEFINITIONS(cleaner_test PRIVATE gtest_disable_pthreaads=ON)
