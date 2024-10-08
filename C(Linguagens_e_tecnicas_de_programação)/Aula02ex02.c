/* 
   Arquivo: Aula02ex2.C
   Arquivo único.
   Aula 06/08/2024
   Autor: João Paulo Traguetta Rufino

*/

#include <stdio.h> //inclui biblioteca de visualização

    int main () {
        float n1,n2,n3;
        printf("Digite 3 números separados por espaços");
        scanf("%f%f%f" &n1,&n2,&n3);
        printf("A média entre os números armazenados é: %f", (n1+n2+n3)/3);

        return 0;

    }