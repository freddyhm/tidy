#include "FileManager.h"
#include <dirent.h>
#include <sys/stat.h>
#include <iostream>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/date_time/gregorian/gregorian.hpp>

using namespace std;

class Tidy{

public:
int main()
{
    const char *filesDir = "/home/fhm-capra/Desktop/";
    const string destPath = "/home/fhm-capra/Desktop/OldFiles/";

    time_t now = time(0);
    boost::gregorian::days dd(5);

    // set the defining date to consider a file old or recent
    boost::posix_time::ptime nowPTime = boost::posix_time::from_time_t(now);
    boost::posix_time::ptime threeDaysPTime = nowPTime - dd;
    std::string oldDate = boost::posix_time::to_simple_string(threeDaysPTime);

    FileManager *fileManager = new FileManager();
    vector<File> allFiles = fileManager->listFilesInPath(filesDir);
    vector<File> oldFiles = fileManager->getOldFiles(oldDate, allFiles);

    if(oldFiles.size() != 0){
       fileManager->moveFilesToFolder(oldFiles, destPath);

    }



    if(fileManager == NULL){
        return 0;
    }else{
        delete fileManager;
        return 1;
    }


}


};
