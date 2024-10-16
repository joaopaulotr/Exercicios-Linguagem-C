/* 
   Arquivo: Aula04ex02.C
   Arquivo único.
   Aula 13/08/2024
   Autor: João Paulo Traguetta Rufino
   solicite tres valores e verifique se eles pertencem a um triangulo retangulo considere apenas numeros inteiros positivos
*/


#include <stdio.h>

int main(){
    int x,y,z;
    printf("Digite 3 valores inteiros positivos oara saber se eles pertencem a um triangulo retangulo: \n");
    scanf("%d%d%d", &x,&y,&z);

    if((x * x) == (y * y) + (z * z) || (y * y) == (x * x) + (z * z) || (z * z) == (y * y) + (x * x))/*Analisa se algum
for verdadeiro e se for ele executa a que for*/{
        printf("Seus valores sao de um triangulo retangulo.");
    } else {
        printf("Seus valores nao sao de um triangulo retangulo.");
    }

    return 0;
}