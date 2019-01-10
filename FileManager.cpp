
#include "FileManager.h"
#include <string>
#include <dirent.h>
#include <sys/stat.h>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <sstream>
#include <cstdio>


using namespace std;

// takes in a pointer to folderpath, meaning an address value of filepath
// whoever calls this method, will have to supply a pointer with no-&
// and will get back a string
vector<File> FileManager::listFilesInPath(const char *folderPath){

    DIR *dir = opendir(folderPath);

    struct dirent *entry;
    vector<File> files;

    while((entry = readdir(dir)) != NULL){
        if(entry->d_name[0] != '.'){
            string fullPath =+ "/" + string(entry->d_name);
            files.push_back(File(string(entry->d_name), getLastOpenedTime(fullPath.c_str())));
        }
    }

  return files;
}

// takes in a pointer to filepath, meaning an address value of filepath
// and returns an address value of char for getLasOpenedTime
// whoever calls this method, will have to supply a pointer
// and will get back a char pointer meaning that to access it i'll just need no &
// if I use * it will point to the first element only ---> per vid
char * FileManager::getLastOpenedTime(const char *filePath){

    struct stat info;

    // here we're sending the address value of info because info is not a pointer
    // and stat is expecting a pointer of char
    stat(filePath, &info);

    return ctime(&info.st_atime);
}

vector<File> FileManager::getOldFiles(string oldDate, vector<File> files){

    // convert oldDate to date
    struct tm oldDateTm;
    istringstream issOldDate(oldDate);
    issOldDate >> get_time(&oldDateTm, "%a %b %d %H:%M:%S %Y");
    time_t oldDateTime = mktime(&oldDateTm);

    // anything that is older than this date will be added to a vector
    vector<File> oldFiles;
    int emptyArrPos = 0;

    for(int i =0; i < files.size(); i++){
        struct tm tmFile;
        istringstream issFile(files[i].getLastOpenedTime());
        issFile >> get_time(&tmFile, "%a %b %d %H:%M:%S %Y");
        time_t timeFile = mktime(&tmFile);

        if(timeFile >= oldDateTime){
            oldFiles.push_back(files[i]);
        }
    }

    return oldFiles;
}

bool FileManager::moveFilesToFolder(string *fileNames, int size, string folderPath){

    for(int i = 0; i < size; i++){
        string newPath = folderPath + fileNames[i];
        string currentPath = "/home/fhm/Desktop/" + fileNames[i];
        rename(currentPath.c_str(), newPath.c_str());
    }

    return true;
}
