#include <string>

class File {
private:
    std::string name;
    std::string path;
    std::string lastOpened;

public:
    File(std::string name, std::string lastOpened){
        this->name = name;
        this->lastOpened = lastOpened;
    }

    std::string getLastOpenedTime()
    {
        return lastOpened;
    }

    std::string getName()
    {
        return name;
    }
};

