/* 
   Arquivo: Aula02ex.C
   Arquivo único.
   Aula 06/08/2024
   Autor: João Paulo Traguetta Rufino

*/

#include <stdio.h> //inclui biblioteca de visualização

    int main () {
        int idade;
        char nome[60]; //limitei para 60 letras o nome da pessoa

        printf ("Digite seu nome: ");
        scanf("%s", &nome); //define que é uma string e acessa a memória da variável nome
        printf("Digite a sua idade: ");
        scanf("%d", &idade);
        printf("Olá %s, sua idade é de %d anos e faltam %d para você completar 100 anos", nome, idade, (100 - idade));
        

        return 0;

    }