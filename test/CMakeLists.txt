include_directories("${PROJECT_SOURCE_DIR}")

set(SOURCE_FILES main.cpp ../File.cpp ../FileManager.cpp ../Tidy.cpp)
add_executable(TidyTestAll ${SOURCE_FILES} main.cpp FileTests.cpp FileManagerTests.cpp TidyTests.cpp)
target_link_libraries(TidyTestAll gtest gmock_main)

