#include <dirent.h>
#include "crypto.c"

int main() {
    DIR *dir = opendir(".");
    struct dirent *entry;

    while ((entry = readdir(dir)) != NULL) {
        if (strstr(entry->d_name, ".txt")) {
            encrypt_file(entry->d_name);
        }
    }
    closedir(dir);
    // Decrypt "_enc" files similarly
    return 0;
}
