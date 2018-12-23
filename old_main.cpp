#include <dirent.h>
#include <sys/stat.h>
#include <iostream>
#include <string>
using namespace std;


void explore(const char *dir_name){
    DIR *dir; // pointer to an open directory
    struct dirent *entry; // stuff in the directory
    struct stat info; // info about each entry

    dir = opendir(dir_name);
    
    if(!dir){
        cout << "Directory was not found\n" << endl;
        return;
    }

    while((entry = readdir(dir)) != NULL){
        if(entry->d_name[0] != '.'){
            string path = string(dir_name) + "/" + string(entry->d_name);
            stat(path.c_str(),&info);
            if(info.st_mode && S_IFDIR){
                cout << "Entry = " << path << endl;
            }
        }else{
            return;
        }
    }

    closedir(dir);
}

void getFileCreationTime(char *filePath)
{
    struct stat attrib;
    stat(filePath, &attrib);
    char date[10];
    strftime(date, 20, "%d-%m-%y", localtime(&(attrib.st_ctime)));
    printf("The file %s was last modified at %s\n", filePath, date);
    date[0] = 0;
}


int main(){

    explore("/home/fhm/Desktop/Empty");

    getFileCreationTime("/home/fhm/Desktop/Untitled.m4a");

    return 0;
}