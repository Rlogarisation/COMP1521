// Create a 16 terabyte sparse file
// https://en.wikipedia.org/wiki/Sparse_file
// error checking omitted for clarity







//****************************************************************
// WARNING: DO NOT OPEN THE CREATED FILE WHICH HAS SIZE OF 16 TB
// ONLY CHECK ITS SIZE BY LS COMMAND
//****************************************************************





#include <stdio.h>

int main(void) {
    FILE *f = fopen("sparse_file.txt", "w");
    fprintf(f, "Hello, Andrew!\n");
    fseek(f, 16L * 1000 * 1000 * 1000 * 1000, SEEK_CUR);
    fprintf(f, "Goodbye, Andrew!\n");
    fclose(f);
    return 0;
}