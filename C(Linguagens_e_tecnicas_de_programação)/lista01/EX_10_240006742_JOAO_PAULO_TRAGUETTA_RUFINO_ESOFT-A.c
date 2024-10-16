#include <stdio.h>

int main(){



    int peso;
    float altura;
    printf("Digite seu peso e altura para saber seu IMC: \n");
    scanf("%d %f", &peso, &altura);

    altura = altura*altura;

    printf("Seu IMC eh igual a %.2f", peso/altura );


    return 0;
}