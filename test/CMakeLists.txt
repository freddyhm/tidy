include_directories("${PROJECT_SOURCE_DIR}")

find_package( Boost 1.69.0 COMPONENTS date_time)
include_directories(${Boost_INCLUDE_DIRS})

set(SOURCE_FILES main.cpp ../File.cpp ../FileManager.cpp ../Tidy.cpp)
add_executable(TidyTestAll ${SOURCE_FILES} main.cpp FileTests.cpp FileManagerTests.cpp TidyTests.cpp)
target_link_libraries(TidyTestAll gtest gmock_main ${Boost_DATE_TIME_LIBRARY})