//
// Created by fhm-capra on 1/7/19.
//

#ifndef FILE_H
#define FILE_H

#include <string>

class File {
private:
    std::string name;
    std::string path;
    std::string lastOpened;

public:
    File(std::string name, std::string lastOpened);
    std::string getLastOpenedTime();
    std::string getName();
};


#endif //FILE_H
