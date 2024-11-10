#include <stdio.h>
#include <string.h>

int main() {
    FILE *arquivo;
    arquivo = fopen("numeros.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int soma = 0, contador = 0, numero;



    fclose(arquivo);

        float media = soma / contador;
    

    return 0;
}
