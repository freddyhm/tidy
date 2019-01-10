#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <string>
#include "../FileManager.h"
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

    vector<File> listedFiles = fileManager.listFilesInPath(filesDir);
    string fileNames [5] = {listedFiles.at(0).getName(), listedFiles.at(1).getName(), listedFiles.at(2).getName(), listedFiles.at(3).getName(), listedFiles.at(4).getName()};
    ASSERT_THAT(fileNames, ElementsAre("test2.txt"));
}

TEST_F(MockFileManager, GetLastOpenedTimeForFile){
    const char *filePath = "/home/fhm-capra/Desktop/FilesTest1/test1.txt";
    string lastOpenedStr(fileManager.getLastOpenedTime(filePath));

    EXPECT_EQ(lastOpenedStr, "Thu Oct 25 09:30:46 2018\n");
}

TEST_F(MockFileManager, GetFilesOlderThanSetDate){
    string setDate = "Tue Oct 30 00:00:00 2018";
    vector<File> oldFiles = fileManager.getOldFiles(setDate, files);
    string lastOpenedTimes [5] = {oldFiles.at(0).getLastOpenedTime(),oldFiles.at(1).getLastOpenedTime(), oldFiles.at(2).getLastOpenedTime(), oldFiles.at(3).getLastOpenedTime(), oldFiles.at(4).getLastOpenedTime()};

    ASSERT_THAT(lastOpenedTimes, ElementsAre("Tue Oct 30 07:57:22 2018\n", "Tue Oct 30 08:50:41 2018\n", "Tue Oct 30 08:50:47 2018\n"));
}

TEST_F(MockFileManager, MoveFilesToFolder){

    string fileNames[] = {"t1.txt", "t2.txt"};
    string path = "/home/fhm-capra/Desktop/FilesTest2/";
    int length = sizeof(fileNames)/sizeof(string);

    EXPECT_EQ(fileManager.moveFilesToFolder(fileNames, length, path), true);
}
