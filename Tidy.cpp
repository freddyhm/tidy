#include "FileManager.h"
#include <string>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/date_time/gregorian/gregorian.hpp>

int main()
{
    const char *filesDir = "/home/fhm-capra/Desktop/";
    const std::string destPath = "/home/fhm-capra/Desktop/OldFiles/";
    const int NUM_DAYS_OLD = 5;

    time_t now = time(0);
    boost::gregorian::days dd(NUM_DAYS_OLD);

    // set the defining date to consider a file old or recent
    boost::posix_time::ptime nowPTime = boost::posix_time::from_time_t(now);
    boost::posix_time::ptime threeDaysPTime = nowPTime - dd;
    std::string oldDate = boost::posix_time::to_simple_string(threeDaysPTime);

    FileManager fileManager;
    std::vector<File> allFiles = fileManager.listFilesInPath(filesDir);
    std::vector<File> oldFiles = fileManager.getOldFiles(oldDate, allFiles);

    int result = 0;

    if(!oldFiles.empty()){
       result = fileManager.moveFilesToFolder(oldFiles, destPath);
    }

    return result;
}
