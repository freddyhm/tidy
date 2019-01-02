#include "gtest/gtest.h"
#include <string>
#include "../File.cpp"
#include <stdio.h>
#include <fstream>

using namespace std;
using namespace testing;


TEST(FileTests, shouldReturnSetLastOpenedTime){
   File file = File("file1", "Thu Oct 25 09:30:46 2018\n");
   EXPECT_EQ ("Thu Oct 25 09:30:46 2018\n", file.getLastOpenedTime());
}

TEST(FileTests, shouldReturnSetFileName){
   File file = File("file1", "Thu Oct 25 09:30:46 2018\n");
   EXPECT_EQ ("file1", file.getName());
}
