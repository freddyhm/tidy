#include "File.h"
#include <string>

File::File(std::string name, std::string lastOpened){
    this->name = name;
    this->lastOpened = lastOpened;
}

std::string File::getLastOpenedTime()
{
    return lastOpened;
}

std::string File::getName() {
    return name;
}


