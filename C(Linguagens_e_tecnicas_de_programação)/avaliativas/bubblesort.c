#include <stdio.h>
#include <string.h>

// função bubblesort: implementa o algoritmo de ordenação por troca (bubble sort)
// recebe um vetor de inteiros 'vet' e o tamanho do vetor 'n'
void bubblesort(int vet[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            // verifica se o elemento atual é maior que o próximo
            if (vet[j] > vet[j + 1]) {
                // troca os dois elementos de lugar
                int temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }
        }
    }
}

int main() {
    // cria um vetor de inteiros para ser ordenado
    int vet[] = {5, 4, 3, 2, 1};

    int n = sizeof(vet) / sizeof(vet[0]);

    // chama a função bubblesort para ordenar o vetor
    bubblesort(vet, n);

    printf("Ordenada\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0; 
}
