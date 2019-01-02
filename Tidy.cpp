#include <dirent.h>
#include <sys/stat.h>
#include <iostream>
#include "FileManager.cpp"

using namespace std;

class Tidy{

public:
int main()
{
    const char *filesDir = "/home/fhm-capra/Desktop/";
    string oldDate = "Tue Dec 30 00:00:00 2018";

    FileManager *fileManager = new FileManager();
    vector<string> allFiles = fileManager->listFilesInPath(filesDir);
    int length = sizeof(allFiles)/sizeof(string);
//    string oldFiles = fileManager->getOldFiles(oldDate, allFiles, length);


    if(fileManager == NULL){
        return 0;
    }else{
       // cout << "HellO" << oldFiles;
        delete fileManager;
        return 1;
    }


}


};
