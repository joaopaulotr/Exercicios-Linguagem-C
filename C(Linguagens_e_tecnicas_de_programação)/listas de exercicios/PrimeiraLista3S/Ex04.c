/*4) Desenvolva um programa em linguagem C que solicite ao usuário um número inteiro N (entre 10 e 50).
 Em seguida, utilize um laço for para percorrer os números, onde:

A primeira variável (i) deve ser incrementada de 1 em 1.
A segunda variável (j) deve ser incrementada de 5 em 5.
O laço deve continuar enquanto i for menor ou igual a N e j for menor ou igual a 2 * N.
Ao final, o programa deve exibir o tamanho em bytes das variáveis utilizadas usando sizeof().*/

#include <stdio.h>

int main() {
    int n;
    int i, j; 

    printf("Digite um número entre 10 e 50: ");
    scanf("%d", &n);

    if (n >= 10 && n <= 50) {
        j = 0; 

        for (i = 0; i <= n && j <= 2 * n; i++, j += 5) {
            printf("%d | %d\n", i, j);
        }

        printf("\nTamanho das var:\n");
        printf("int n: %lu bytes\n", sizeof(n));
        printf("int i: %lu bytes\n", sizeof(i));
        printf("int j: %lu bytes\n", sizeof(j));

    } else {
        printf("Número inválido! Reinicie o programa.\n");
    }

    return 0;
}
