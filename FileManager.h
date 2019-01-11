//
// Created by fhm-capra on 1/10/19.
//



#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <vector>
#include <string>
#include "File.h"

class FileManager{

public:
    std::vector<File> listFilesInPath(const char *folderPath);
    std::string getLastOpenedTime(const char *filePath);
    std::vector<File> getOldFiles(std::string oldDate, std::vector<File> files);
    int moveFilesToFolder(std::vector<File> files, std::string folderPath);
};

#endif //FILEMANAGER_H
