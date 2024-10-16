/* 
   Arquivo: Aula02.C
   Arquivo único.
   Aula 06/08/2024
   Autor: João Paulo Traguetta Rufino

*/

#include <stdio.h> //inclui biblioteca de visualização

//Função principal (main) que devolve um inteiro (int)
    int main () { //Início da função
        int peso, idade; //todos são inteiros
        float altura; 
        printf( "Digite sua idade, peso e altura separados por espaços \n");
        scanf("%d%d%f", &idade, &peso, &altura); //& acessa a memória
        printf("Você tem %d anos, %d kilos e %fm de altura", idade, peso, altura); //%d para inteiros %f números reais
        
        return 0;

} //Fim da função