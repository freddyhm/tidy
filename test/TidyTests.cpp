//
// Created by fhm-capra on 1/2/19.
//

#include "Tidy.cpp"
#include "gtest/gtest.h"

using namespace std;
using namespace testing;


TEST(TidyTests, shouldStartTidy){
    Tidy test = Tidy();
    test.main();
    EXPECT_EQ (0, 1);
}

