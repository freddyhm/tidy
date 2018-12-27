#include "gtest/gtest.h"
#include <string>
#include "../File.cpp"
#include <stdio.h>
#include <fstream>

using namespace std;
using namespace testing;



TEST(FileTests, CreateFile){
   // File file = File("file1", "Thu Oct 25 09:30:46 2018\n");
   EXPECT_EQ (18.0, 181);
}
