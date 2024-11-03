#include <stdio.h>


int main () {
    int num1, num2;
    printf("Digite dois numeros: \n");
    scanf("%d%d", &num1, &num2 );

    if(num1 > num2){

        printf("%d e maior que %d", num1, num2);


    } else {

         printf("%d e maior que %d", num2, num1);

    }

    





    return 0;
}