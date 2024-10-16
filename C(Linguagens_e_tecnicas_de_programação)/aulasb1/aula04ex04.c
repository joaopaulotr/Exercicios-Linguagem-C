/* 
   Arquivo: Aula04ex04.C
   Arquivo único.
   Aula 13/08/2024
   Autor: João Paulo Traguetta Rufino
   função que calcula qualquer divisao
*/

#include <stdio.h>

int verificadivisor (int num, int div){

    return num % div;
}

int main(){
    int a,b;
    printf("Digite 2 numeros:\n");
    scanf("%d%d", &a,&b);
    verificadivisor(a,b);

    

    return 0;
}