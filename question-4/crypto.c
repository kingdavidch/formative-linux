#include <stdio.h>
#include <string.h>

void encrypt_file(const char *input) {
    FILE *infile = fopen(input, "rb");
    char output[256];
    snprintf(output, sizeof(output), "%s_enc", input);
    FILE *outfile = fopen(output, "wb");

    int c;
    while ((c = fgetc(infile)) != EOF) {
        fputc(c + 4, outfile);
    }

    fclose(infile);
    fclose(outfile);
}

void decrypt_file(const char *input) {
    // Similar to encrypt_file, subtract 4 from each byte
}
