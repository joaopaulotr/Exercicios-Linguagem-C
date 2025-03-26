#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Desenvolva um programa em linguagem C que realize as seguintes operações:
 *
 * Alocação Dinâmica de Memória:
 *
 * -------------------------------------------
 * Crie um vet dinâmico contendo 10 elementos numéricos (não repetidos) no intervalo de 10 a 100, utilizando a função malloc.
 * Exiba na tela o endereço de memória do vet.
 *
 * Exibição dos Elementos:
 * -------------------------------------------
 * Implemente um procedimento que exiba os elementos gerados, apresentando tanto o valor quanto o endereço de memória de cada elemento.
 *
 * Expansão do vet:
 * -------------------------------------------
 * Redimensione o vet para conter 15 elementos.
 * Gere valores aleatórios (entre 100 e 199 não repetidos), para os novos elementos.
 * Utilize o mesmo procedimento mencionado anteriormente para exibir os elementos atualizados, com seus respectivos valores e endereços de memória.
 *
 * Redução do vet:
 * -------------------------------------------
 * Reduza o tamanho do vet para 8 elementos.
 * Apresente novamente os valores e endereços de memória dos elementos, conforme o procedimento já implementado.
 *
 * Liberação de Memória:
 * -------------------------------------------
 * Certifique-se de liberar a memória alocada ao final da execução do programa, utilizando a função free.
 */

void exibirElementos(int *vet, int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("Endereco de memoria do elemento %d: %p\n", i, &vet[i]);
        printf("Valor do elemento %d: %d\n", i, vet[i]);
    }
}

int main()
{
    srand(time(NULL));
    int *vet;
    vet = (int *)malloc(10 * sizeof(int));

    printf("Crie um vet dinâmico contendo 10 elementos numéricos (não repetidos) no intervalo de 10 a 100, utilizando a função malloc. Exiba na tela o endereço de memória do vet.");
    printf("\n");

    for (int i = 0; i < 10; i++) {
        int num;
        int repetido;
        do {
            num = rand() % 91 + 10;
            repetido = 0;
            for (int j = 0; j < i; j++) {
                if (vet[j] == num) {
                    repetido = 1;
                }
            }
        } while (repetido);
        vet[i] = num;
    }

    exibirElementos(vet, 10);

    printf("Redimensione o vet para conter 15 elementos.Gere valores aleatórios (entre 100 e 199 não repetidos), para os novos elementos. Utilize o mesmo procedimento mencionado anteriormente para exibir os elementos atualizados, com seus respectivos valores e endereços de memória.");
    printf("\n");

    vet = (int *)realloc(vet, 15 * sizeof(int));

    for (int i = 10; i < 15; i++) {
        int num;
        int repetido;
        do {
            num = rand() % 100 + 100;
            repetido = 0;
            for (int j = 0; j < i; j++) {
                if (vet[j] == num) {
                    repetido = 1;
                }
            }
        } while (repetido);
        vet[i] = num;
    }

    exibirElementos(vet, 15);

    printf(" Reduza o tamanho do vet para 8 elementos. Apresente novamente os valores e endereços de memória dos elementos, conforme o procedimento já implementado.");
    printf("\n");

    vet = (int*)realloc(vet, 8 * sizeof(int));
    exibirElementos(vet, 8);

    printf("Certifique-se de liberar a memória alocada ao final da execução do programa, utilizando a função free.");
    printf("\n");
    free(vet);
}
