cmake_minimum_required(VERSION 3.20)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/src")
add_subdirectory(googletest)
include_directories(header src)

add_executable(runAllTests
    adminTest.cpp
  #../test/taskTest.cpp 
  #../test/taskListTest.cpp
)

add_executable(prog
  ../src/main.cpp
  ../src/Admin.cpp
  ../src/Task.cpp
  ../src/TaskList.cpp
)


# add_executable( taskTest
#         src/Task.cpp
#         test/taskTest.cpp
# )

target_link_libraries(runAllTests gmock gtest gtest_main)
target_link_libraries(runAllTests simpleLibrary)
target_link_libraries(prog gtest gtest_main)
target_link_libraries(prog simpleLibrary)

#TARGET_COMPILE_DEFINITIONS(runAllTests PRIVATE gtest_disable_pthreads=ON)