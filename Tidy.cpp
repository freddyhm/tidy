#include <dirent.h>
#include <sys/stat.h>
#include <iostream>
#include "FileManager.h"

using namespace std;

class Tidy{

public:
int main()
{
    const char *filesDir = "/home/fhm-capra/Desktop/";
    string oldDate = "Sat Jan 03 00:00:00 2019";

    FileManager *fileManager = new FileManager();
    vector<File> allFiles = fileManager->listFilesInPath(filesDir);
    vector<File> oldFiles = fileManager->getOldFiles(oldDate, allFiles);

    if(fileManager == NULL){
        return 0;
    }else{
       // cout << "HellO" << oldFiles;
        delete fileManager;
        return 1;
    }


}


};
