//
// Created by fhm-capra on 1/10/19.
//



#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <vector>
#include <string>
#include "File.cpp"

class FileManager{

public:
    std::vector<File> listFilesInPath(const char *folderPath);
    char *getLastOpenedTime(const char *filePath);
    std::vector<File> getOldFiles(std::string oldDate, std::vector<File> files);
    bool moveFilesToFolder(std::string *fileNames, int size, std::string folderPath);
};

#endif //FILEMANAGER_H
