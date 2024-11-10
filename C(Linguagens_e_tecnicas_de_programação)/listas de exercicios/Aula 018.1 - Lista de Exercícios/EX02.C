#include <stdio.h> 
int main () {
    char carac;
    FILE *arquivo;
    arquivo = fopen ("file.txt", "r");

    while ((carac = fgetc(arquivo)) != EOF) {
         putchar(carac);
    }
     fclose(arquivo);

    return 0;
}