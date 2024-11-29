#include <stdio.h>

// função insertion sort
void insertion(int v[], int tam) {
    for (int i = 1; i < tam; ++i) {
        // armazena o valor atual a ser comparado
        int valor = v[i];
        int j = i;
        // desloca elementos maiores que o valor para a direita
        for (; j > 0 && v[j - 1] > valor; --j) {
            v[j] = v[j - 1];
        }
        // insere o valor na posição correta
        v[j] = valor;
    }
}

int main() {
    // define o vetor a ser ordenado
    int v[] = {7, 2, 9, 4, 1, 5};

    // chama a função de ordenação
    insertion(v, 6);

    // imprime os elementos do vetor ordenado
    for (int i = 0; i < 6; ++i) {
        printf("%d\n", v[i]); // imprime cada elemento em uma nova linha
    }

    return 0; 
}
