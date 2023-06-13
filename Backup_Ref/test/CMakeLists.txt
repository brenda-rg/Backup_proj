cmake_minimum_required(VERSION 3.20)
project(Kooala)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/src")

add_subdirectory(googletest)
include_directories(header src)
link_libraries(gtest gtest_main)
set(SOURCE_FILES ../src/Admin.cpp ../src/TaskBase.cpp ../src/DateTimeTask.cpp ../src/VerifyDate.cpp ../src/Tag.cpp ../src/TagTask.cpp ../src/PriorityTask.cpp ../src/TaskList.cpp ../src/UserSort.cpp)
set(TEST_FILES testTaskBase.cpp testDateTimeTask.cpp testVerifyDate.cpp testTagTask.cpp testTag.cpp testPriorityTask.cpp)

add_executable(runAllTests
${TEST_FILES}
${SOURCE_FILES}
)

add_executable(prog
  ../src/main.cpp
  ${SOURCE_FILES}
)

#TARGET_COMPILE_DEFINITIONS(runAllTests PRIVATE gtest_disable_pthreads=ON)