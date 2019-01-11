include_directories("${PROJECT_SOURCE_DIR}")

find_package( Boost 1.69.0 COMPONENTS date_time)
include_directories(${Boost_INCLUDE_DIRS})

set(SOURCE_FILES ../File.cpp ../FileManager.cpp ../Tidy.cpp)
add_executable(TidyTestAll ${SOURCE_FILES} main.cpp FileTests.cpp FileManagerTests.cpp)
add_executable(Tidy  ${SOURCE_FILES})

target_link_libraries(TidyTestAll gtest gmock_main ${Boost_DATE_TIME_LIBRARY})
target_link_libraries(Tidy ${Boost_DATE_TIME_LIBRARY})