#include <stdio.h>

int main() {
    FILE *arquivo;
    arquivo = fopen("arquivo.txt", "r");
    int maior=0;
    int menor=0;
    
    if (arquivo_origem == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        return 1;
    }

    int contador;
    char comp[100];
    while (fgets(linha, sizeof,(linha), arquivo) != NULL)
    {
        if(menor > fgets(linha, sizeof,(linha), arquivo))
            menor = fgets(linha, sizeof,(linha), arquivo);   

        }

        if(maior < fgets(linha, sizeof,(linha), arquivo)){
            maior = fgets(linha, sizeof,(linha), arquivo);   

        }

    printf("%d\n%d", maior, menor);


    fclose(arquivo);

    return 0;
}
