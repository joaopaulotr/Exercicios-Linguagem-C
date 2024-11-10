#include <stdio.h>

int main() {
    FILE *arquivo;
    arquivo = fopen("arquivo.txt", "r");

    
    if (arquivo_origem == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        return 1;
    }

    int contador;
    char comp[100];
    while (fgets(linha, sizeof,(linha), arquivo) != NULL)
    {
        fscanf("%s, linha");
        if (strcmp(linha, comp) == 0)
        contador ++;
        }
    printf("%d", contador);


    fclose(arquivo);

    return 0;
}
