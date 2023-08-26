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

    printf("chemin : %s", pathPackage);
    return 0;
}