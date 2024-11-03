#include <stdio.h>
#include <string.h>

    int main () {

        char palavra [60];
        int qtdpalavra;

        printf ("digite uma palavra: ");
            scanf ("%s", palavra);

        for (int i=0; i < strlen(palavra); i++) {
            if (palavra == ' ') qtdpalavra++;
        }

        printf ("a quantidade de palavras encontradas foi: %d", qtdpalavra);

        return 0;
    }