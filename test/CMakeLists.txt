include_directories("${PROJECT_SOURCE_DIR}")

add_executable(main main.cpp)
target_link_libraries(main gtest)

add_executable(FileManagerTests FileManagerTests.cpp TidyTests.cpp)
add_executable(FileTests FileTests.cpp)
add_executable(TidyTest TidyTests.cpp)

target_link_libraries(FileManagerTests gtest gmock_main)
target_link_libraries(FileTests gtest gmock_main)
target_link_libraries(TidyTest gtest gmock_main)

add_test(NAME FileManagerTests_test COMMAND FileManagerTests)
add_test(NAME FileTests_test COMMAND FileTests)
add_test(NAME TidyTest_test COMMAND TidyTests)
