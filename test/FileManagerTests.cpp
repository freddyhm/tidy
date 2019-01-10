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
};

TEST_F(MockFileManager, ListFilesInPath){
    const char *filesDir = "/home/fhm-capra/Desktop/FilesTest1/";
    vector<File> listedFiles = fileManager.listFilesInPath(filesDir);
    string fileNames [4] = {listedFiles.at(0).getName(), listedFiles.at(1).getName(), listedFiles.at(2).getName(), listedFiles.at(3).getName()};
    ASSERT_THAT(fileNames, ElementsAre("test2.txt", "test3.txt", "test4.txt", "test1.txt"));
}

TEST_F(MockFileManager, GetLastOpenedTimeForFile){
    const char *filePath = "/home/fhm-capra/Desktop/FilesTest1/test1.txt";
    string lastOpenedStr(fileManager.getLastOpenedTime(filePath));

    EXPECT_EQ(lastOpenedStr, "2018-Oct-25 13:30:46");
}

TEST_F(MockFileManager, GetFilesOlderThanSetDate){

    File file1 = File("test2.txt", "2018-Oct-25 09:30:46");
    File file2 = File("test3.txt", "2018-Oct-30 07:57:22");
    File file3 = File("test4.txt", "2018-Oct-01 08:50:41");
    File file4 = File("test1.txt", "2018-Oct-10 08:50:47");
    vector<File> files{file2, file3, file4, file1};

    string setDate = "2018-Oct-20 13:30:46";
    vector<File> oldFiles = fileManager.getOldFiles(setDate, files);
    string lastOpenedTimes [2] = {oldFiles.at(0).getName(), oldFiles.at(1).getName()};

    ASSERT_THAT(lastOpenedTimes, ElementsAre(file3.getName(), file4.getName()));
}

TEST_F(MockFileManager, MoveFilesToFolder){

    File file1 = File("license_agreement.txt", "2018-Jul-27 12:27:46");
    File file2 = File("test111.sh", "2018-Jul-27 12:27:46");
    vector<File> files{file1, file2};

    string destPath = "/home/fhm-capra/Desktop/FilesTest2/";

    EXPECT_EQ(fileManager.moveFilesToFolder(files, destPath), true);
}
