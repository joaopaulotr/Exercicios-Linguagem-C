#include <stdio.h>


int main(){
    char nome [20];
    char sobrenome [20];
    
    printf("Digite seu nome: \n");
        gets(nome); //faz a leitura da string como completo
    printf("Digite seu sobrenome: \n");
        gets(sobrenome);
    printf("Seu nome e sobrenome concatenado eh: %s %s", nome,sobrenome);




    return 0;
}