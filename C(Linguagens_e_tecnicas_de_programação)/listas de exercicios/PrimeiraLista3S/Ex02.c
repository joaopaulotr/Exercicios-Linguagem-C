/* 
Elabore um programa em linguagem C que exiba os números de 1 a 10 em ordem crescente 
e, simultaneamente, os números de 20 a 11 em ordem decrescente.*/

#include <stdio.h>

int main(){
    int i = 0;

    for ( i = 0; i < 10; i++)
    {
        printf("%d | %d \n", i+1, 20-i);
    }
    
}