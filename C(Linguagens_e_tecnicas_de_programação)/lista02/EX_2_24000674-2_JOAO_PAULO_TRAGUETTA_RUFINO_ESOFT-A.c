#include <stdio.h>

int main(){
    int valor, n100 = 0,n50 = 0,n10 = 0,n20 = 0,n5 = 0;
    printf("Digite o valor a ser sacado: \n");
    scanf("%d", &valor);
    
        if (valor >= 100){

        n100 = valor / 100;
        valor %= 100;

        } if (valor >= 50){

        n50 = valor / 50;
        valor %= 50;

        } if(valor >= 20) {

        n20 = valor / 20;
        valor %= 20;

        } if(valor >= 10) {

        n10 = valor / 10;
        valor %= 10;

        } if (valor >= 5) {

        n5 = valor / 5;
        valor %= 5;

        }

    printf("%d, notas de 100", n100);
    printf("%d, notas de 50", n50);
    printf("%d, notas de 20", n20);
    printf("%d, notas de 10", n10);
    printf("%d, notas de 5", n5);




    return 0;
}