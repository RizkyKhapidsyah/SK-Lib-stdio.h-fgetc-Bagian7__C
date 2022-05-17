#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    Source by Microsoft (https://docs.microsoft.com/en-us/cpp)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    FILE* stream;
    char buffer[81];
    int  i, ch;

    fopen_s(&stream, "crt_fgetc.txt", "r");

    if (stream == NULL) {
        exit(0);
    }
        
    ch = fgetc(stream);

    for (i = 0; (i < 80) && (feof(stream) == 0); i++) {
        buffer[i] = (char)ch;
        ch = fgetc(stream);
    }

    buffer[i] = '\0';
    printf("%s\n", buffer);
    fclose(stream);

    _getch();
    return 0;
}