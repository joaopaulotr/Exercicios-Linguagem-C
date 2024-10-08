/* 
   Arquivo: Aula05.C
   Arquivo único.
   Aula 20/08/2024
   Autor: João Paulo Traguetta Rufino
   verifica se é par ou impar
*/

#include <stdio.h>

int par_impar (int n1){
    if(n1 % 2 == 0){
        return 1;
    } else {
        return 0;
    }
}
int main () {
    int n1; //declarei a função
    printf("Digite um numero para descobrir se ele eh impar ou par:\n");
    scanf("%d", &n1);

    if(par_impar(n1)){
        printf("%d eh par, UAU!", n1);
    } else {
        printf("%d eh impar, UAU!", n1);
    }


    return 0;
}