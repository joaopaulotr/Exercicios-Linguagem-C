#include <stdio.h>

int main() {
    FILE *arquivo_origem, *arquivo_destino;
    arquivo_origem = fopen("origem.txt", "r");
    arquivo_destino = fopen("copia.txt", "w");
    
    if (arquivo_origem == NULL || arquivo_destino == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        return 1;
    }

    char caractere;
    while ((caractere = fgetc(arquivo_origem)) != EOF) {
        fputc(caractere, arquivo_destino);
    }

    fclose(arquivo_origem);
    fclose(arquivo_destino);

    printf("Arquivo copiado com sucesso.\n");
    return 0;
}
