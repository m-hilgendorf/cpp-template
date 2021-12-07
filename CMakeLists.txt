cmake_minimum_required(VERSION 3.16)
project(cpp_template)
set(CMAKE_CXX_STANDARD 17)
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)

FetchContent_MakeAvailable(googletest)

add_library(project_shared STATIC src/lib.cpp)
target_include_directories(project_shared PUBLIC include)

add_executable(project src/main.cpp)
target_include_directories(project PUBLIC include)
target_link_libraries(project PUBLIC project_shared)

enable_testing()
add_executable(tests tests/lib.test.cpp)
target_include_directories(tests PUBLIC include)
target_link_libraries(tests PUBLIC gtest_main project_shared)
include(GoogleTest)
gtest_discover_tests(tests)
