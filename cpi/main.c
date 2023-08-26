#include "prototype.h"


// structure 





int main(int argc, char *argv[]){

    // chemin vers le dossier pacckages, packages/
    // python-open-cv2-3


    // recuper le chemin absolue , on le stocke dans la variable path
    char buffer[1024];
    char *pathPackage = getcwd(buffer, sizeof(buffer));

    // chemin vers notre depot de packages
    char packagesDir[10] = "/packages";
    strcat(pathPackage, packagesDir);
    // dossier package
    DIR *packages;
    struct dirent *ent;
    struct stat statbuf;

    packages = opendir(pathPackage);
    if(packages == NULL){
        return 3;
    }

    while((ent = readdir(packages))!= NULL){
        stat(ent->d_name, &statbuf);
        printf("%s \n", ent->d_name);
    }

    closedir(packages);


    return 0;
}