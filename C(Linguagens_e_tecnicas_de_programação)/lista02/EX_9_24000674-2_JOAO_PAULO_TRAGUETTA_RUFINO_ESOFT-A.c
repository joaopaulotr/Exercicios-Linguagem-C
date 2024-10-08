#include <stdio.h>

int main() {
    int numero, i, primo = 1; 

    printf("Digite um num: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        primo = 0;
    } else {
        for (i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
        primo = 0; 
        break;
        }
        }
    }

    if (primo) {
        printf("%d eh um num primo.\n", numero);
    } else {
        printf("%d nao eh um num primo.\n", numero);
    }

    return 0;
}
