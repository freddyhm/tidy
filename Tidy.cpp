#include <dirent.h>
#include <sys/stat.h>
#include <iostream>
using namespace std;

class Tidy{
public:
    bool exploreDir(const char *dir_name){
        
        if(dir_name == ""){            
            return false; 
        }

        DIR *dir = opendir(dir_name);

        if(!dir){
            return false;
        }

        struct dirent *entry;
        struct stat info; 

        bool hasFiles = false; 

        while((entry = readdir(dir)) != NULL){
            if(entry->d_name[0] != '.'){
                string path = string(dir_name) + "/" + string(entry->d_name);
                stat(path.c_str(),&info);  

                if(info.st_mode && S_IFDIR){
                    cout << "Entry = " << path << endl;
                }
                
                hasFiles = true;
                
            }else{
                return hasFiles;
            }
        }
        
        return true;
    };

};
