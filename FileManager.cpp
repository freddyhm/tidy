// Real class we want to mock
#include <string>
#include <dirent.h>
#include <sys/stat.h>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <sstream>
#include <vector>
#include <cstdio>

using namespace std;

class FileManager {
public:

    // takes in a pointer to folderpath, meaning an address value of filepath
    // whoever calls this method, will have to supply a pointer with no-&
    // and will get back a string
    string listFilesInPath(const char *folderPath){

        DIR *dir = opendir(folderPath);

        struct dirent *entry;
        string files;

        while((entry = readdir(dir)) != NULL){
            if(entry->d_name[0] != '.'){
                if (files.empty()){
                    files = string(entry->d_name);
                }else{
                    files += " " + string(entry->d_name);
                }
            }
        }

      return files;
    }

    // takes in a pointer to filepath, meaning an address value of filepath
    // and returns an address value of char for getLasOpenedTime
    // whoever calls this method, will have to supply a pointer
    // and will get back a char pointer meaning that to access it i'll just need no &
    // if I use * it will point to the first element only ---> per vid
    char *getLastOpenedTime(const char *filePath){

        struct stat info;

        // here we're sending the address value of info because info is not a pointer 
        // and stat is expecting a pointer of char
        stat(filePath, &info);

        return ctime(&info.st_atime);
    }

    vector<string> getOldFiles(string oldDate, string *files, int size){

        // convert oldDate to date
        struct tm oldDateTm;
        istringstream issOldDate(oldDate);
        issOldDate >> get_time(&oldDateTm, "%a %b %d %H:%M:%S %Y");
        time_t oldDateTime = mktime(&oldDateTm);

        // anything that is older than this date will be added to a vector
        vector<string> oldFiles;
        int emptyArrPos = 0;
        
        for(int i =0; i < size; i++){
            struct tm tmFile;
            istringstream issFile(files[i]);
            issFile >> get_time(&tmFile, "%a %b %d %H:%M:%S %Y");
            time_t timeFile = mktime(&tmFile);

            if(timeFile >= oldDateTime){
                oldFiles.push_back(files[i]);
            }
        }

        return oldFiles;
    }

    bool moveFilesToFolder(string *fileNames, int size, string folderPath){

        for(int i = 0; i < size; i++){
            string newPath = folderPath + fileNames[i];
            string currentPath = "/home/fhm/Desktop/" + fileNames[i];
            rename(currentPath.c_str(), newPath.c_str());
        }

        return true;
    }

};