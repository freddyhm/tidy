
#include "FileManager.h"
#include <string>
#include <dirent.h>
#include <sys/stat.h>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <sstream>
#include <cstdio>
#include <boost/date_time/posix_time/posix_time.hpp>


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
            string fileName = string(entry->d_name);
            string fullPath = string(folderPath) + fileName;
            files.push_back(File(fileName, getLastOpenedTime(fullPath.c_str())));
        }
    }

  return files;
}

// takes in a pointer to filepath, meaning an address value of filepath
// and returns an address value of char for getLasOpenedTime
// whoever calls this method, will have to supply a pointer
// and will get back a char pointer meaning that to access it i'll just need no &
// if I use * it will point to the first element only ---> per vid
string FileManager::getLastOpenedTime(const char *filePath){

    struct stat info;

    // here we're sending the address value of info because info is not a pointer
    // and stat is expecting a pointer of char
    stat(filePath, &info);

    boost::posix_time::ptime fileLastOpenedPTime = boost::posix_time::from_time_t(info.st_atime);
    std::string fileLastOpenedTime = boost::posix_time::to_simple_string(fileLastOpenedPTime);

    return fileLastOpenedTime;
}

vector<File> FileManager::getOldFiles(string oldDate, vector<File> files){

    // convert oldDate string to ptime
    boost::posix_time::ptime oldDatePtime = boost::posix_time::time_from_string(oldDate);

    // anything that is older than this date will be added to a vector
    vector<File> oldFiles;

    for(int i =0; i < files.size(); i++){

        boost::posix_time::ptime lastOpenedPTime = boost::posix_time::time_from_string(files[i].getLastOpenedTime());

        if(lastOpenedPTime < oldDatePtime){
            oldFiles.push_back(files[i]);
        }
    }

    return oldFiles;
}

bool FileManager::moveFilesToFolder(vector<File> files, string folderPath){

    for(int i = 0; i < files.size(); i++){
        string newPath = folderPath + files[i].getName();
        string currentPath = "/home/fhm-capra/Desktop/" + files[i].getName();
        rename(currentPath.c_str(), newPath.c_str());
    }

    return true;
}
