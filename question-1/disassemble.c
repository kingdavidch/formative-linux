#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <executable> <output.txt>\n", argv[0]);
        return 1;
    }

    char command[256];
    snprintf(command, sizeof(command), "objdump -d %s > %s", argv[1], argv[2]);

    if (system(command) != 0) {
        perror("Error during disassembly");
        return 1;
    }

    printf("Disassembly saved to %s\n", argv[2]);
    return 0;
}
