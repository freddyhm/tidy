#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <string>
#include "../FileManager.cpp"
#include <stdio.h>
#include <fstream>

using namespace std;
using namespace testing;

// Mock class
class MockFileManager : public Test {
public:
    FileManager fileManager;

    File file1 = File("test2.txt", "Thu Oct 25 09:30:46 2018\n");
    File file2 = File("test3.txt", "Tue Oct 30 07:57:22 2018\n");
    File file3 = File("test4.txt", "Tue Oct 30 08:50:41 2018\n");
    File file4 = File("test1.txt", "Tue Oct 30 08:50:47 2018\n");
    vector<File> files{file2, file3, file4, file1};
};

TEST_F(MockFileManager, ListFilesInPath){
    const char *filesDir = "/home/fhm-capra/Desktop/FilesTest1/";
    ASSERT_THAT(fileManager.listFilesInPath(filesDir), ElementsAre(file2, file3, file4, file1));
}

TEST_F(MockFileManager, GetLastOpenedTimeForFile){
    const char *filePath = "/home/fhm-capra/Desktop/FilesTest1/test1.txt";
    string lastOpenedStr(fileManager.getLastOpenedTime(filePath));

    EXPECT_EQ(lastOpenedStr, "Thu Oct 25 09:30:46 2018\n");
}

TEST_F(MockFileManager, GetFilesOlderThanSetDate){
    string setDate = "Tue Oct 30 00:00:00 2018";
    vector<File> oldFiles = fileManager.getOldFiles(setDate, files);

    ASSERT_THAT(oldFiles, ElementsAre("Tue Oct 30 07:57:22 2018\n", "Tue Oct 30 08:50:41 2018\n", "Tue Oct 30 08:50:47 2018\n"));
}

TEST_F(MockFileManager, MoveFilesToFolder){

    string fileNames[] = {"t1.txt", "t2.txt"};
    string path = "/home/fhm-capra/Desktop/FilesTest2/";
    int length = sizeof(fileNames)/sizeof(string);

    EXPECT_EQ(fileManager.moveFilesToFolder(fileNames, length, path), true);
}
