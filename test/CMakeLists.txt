include_directories("${PROJECT_SOURCE_DIR}")

add_executable(TidyTestAll main.cpp FileManagerTests.cpp FileTests.cpp TidyTests.cpp)
target_link_libraries(TidyTestAll gtest gmock_main)

add_test(NAME TidyTest_all COMMAND TidyTests)

