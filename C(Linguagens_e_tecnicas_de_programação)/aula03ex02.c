/* 
   Arquivo: Aula03ex02.C
   Arquivo único.
   Aula 09/08/2024
   Autor: João Paulo Traguetta Rufino
   Medias ponderadas, aritmetica e harmonica

*/

#include <stdio.h>

int main() {
    float n1,n2,n3,n4,resultado;
    char escolha;
    printf ("Escolha o tipo de media: \nA - Aritmetica\nP - Ponderada\nH - Harmonica");
    scanf("%c",&escolha);
    printf("Digite a primeira nota:");
    scanf("%f", &n1);
    printf("Digite a segunda nota:");
    scanf("%f", &n2);
    printf("Digite a terceira nota:");
    scanf("%f", &n3);
    printf("Digite a quarta nota:");
    scanf("%f", &n4);

    if(escolha == 'A'){
        resultado = (n1 + n2 + n3 + n4)/4;
    }
    if(escolha == 'P'){
        resultado = (2*n1 + 3*n2 + 5*n3 + 10*n4)/20;
    }
    if(escolha == 'H'){
        resultado = 4/((1/n1) + (1/n2) + (1/n3) + (1/n4));
    }
    if(resultado >= 60){

    printf("A media %c dos numeros %.1f. %.1f. %.1f. %.1f.  e igual a: %f e voce esta aprovado :)", escolha, n1 , n2 , n3 , n4 , resultado);
    }
    else{
    printf("A media %c dos numeros %.1f%.1f%.1f%.1f e igual a: %f e voce esta reprovado :(", escolha, n1 , n2 , n3 , n4 , resultado);
    }

    return 0;
}