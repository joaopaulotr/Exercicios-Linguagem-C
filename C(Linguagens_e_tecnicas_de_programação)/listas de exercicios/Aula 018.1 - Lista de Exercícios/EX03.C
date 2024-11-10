#include <stdio.h>
int main () {
    FILE *arquivo;
    arquivo = fopen ("file.txt", "w");

    if (arquivo == NULL) {
           printf("O arquivo nao existe\n");
        return 1;
    } else {
        printf ("Encontramos o arquivo \n");
    }

    return 0;
}