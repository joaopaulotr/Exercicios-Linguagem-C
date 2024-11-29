#include <stdio.h>

int main() {
    int vetor[100], tamanho, i, j, posicao, troca;

    printf("Digite o número de elementos:\n");
    scanf("%d", &tamanho);

    printf("Digite %d números inteiros:\n", tamanho);
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < (tamanho - 1); i++) {
        posicao = i;

        // encontra o menor elemento na parte não ordenada
        for (j = i + 1; j < tamanho; j++) {
            if (vetor[posicao] > vetor[j]) {
                posicao = j;
            }
        }

        // troca o menor elemento com o primeiro da parte não ordenada
        if (posicao != i) {
            troca = vetor[i];
            vetor[i] = vetor[posicao];
            vetor[posicao] = troca;
        }
    }

    // exibe o vetor ordenado
    printf("Lista ordenada em ordem crescente:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d\n", vetor[i]); // imprime cada elemento em uma nova linha
    }

    return 0; 
}
