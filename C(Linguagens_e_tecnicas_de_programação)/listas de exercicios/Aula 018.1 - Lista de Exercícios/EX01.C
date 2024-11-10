#include <stdio.h> 

int main () {
    FILE *arquivo;
    arquivo = fopen("file.txt", "w");

    fprintf (arquivo, "Hello World!");
    fclose(arquivo);

    return 0;
}