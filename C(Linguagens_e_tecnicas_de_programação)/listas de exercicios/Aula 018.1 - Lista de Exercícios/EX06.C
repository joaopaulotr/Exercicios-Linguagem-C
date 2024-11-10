#include <stdio.h>

int main (){
    FILE *arquivo;
    arquivo = fopen("texto.txt", "r");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }


    char contadorp[100];
    int conta = 0;
    while (fscanf(arquivo, "%s", palavra) != EOF){
        contagem ++;
    }


    printf("O arquivo tem %d palavras\n", contagem);
    fclose(arquivo);

    return 0
}