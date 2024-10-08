/* 
   Arquivo: Aula03ex02.C
   Arquivo único.
   Aula 13/08/2024
   Autor: João Paulo Traguetta Rufino
   Divide dois números e faz o "cast" que transforma o inteiro em float para economizar memoria.
*/


#include <stdio.h>

int main(){

    int x, y;
    printf("Digite um numero:");
    scanf("%d", &x);
    printf("Digite outro número:");
    scanf("%d", &y);
    
    if(y == 0){
        printf("Seu divisor e invalido, o valor precisa ser diferente de zero.");
    }else{
        printf( "%d / %d =%f ",x, y, (float) x / y );
    }

return 0;
}