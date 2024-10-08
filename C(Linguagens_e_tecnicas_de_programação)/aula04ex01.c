/* 
   Arquivo: Aula03ex02.C
   Arquivo único.
   Aula 13/08/2024
   Autor: João Paulo Traguetta Rufino
   Escreva um algoritmo que leia um numero inteiro e escreva como saida "divisivel por 3 e 7"
*/

#include <stdio.h>

int main(){
    int x;
    printf("Digite um numero inteiro para descobir se ele e divisivel por 3 ou 7:");
    scanf("%d", &x);

    if( x % 3 == 0 /*o resto tem que ser 0*/){
        printf("%d e divisivel por 3.\n",x);
    }else {
        printf("%d nao e divisivel por 3.\n",x);
    }

    if( x % 7 == 0){
    printf("%d e divisivel por 7.\n",x);
    }else {
        printf("%d nao e divisivel por 7.\n",x);
    }

    return 0;
}