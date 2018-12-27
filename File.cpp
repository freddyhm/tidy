#include <string>

class File {
private:
    std::string name;
    std::string path;
    std::string lastModified;
    std::string lastOpened;

public:
    File(std::string name, std::string lastOpened){
        this->name = name;
        this->lastModified = lastModified;
    }
};

