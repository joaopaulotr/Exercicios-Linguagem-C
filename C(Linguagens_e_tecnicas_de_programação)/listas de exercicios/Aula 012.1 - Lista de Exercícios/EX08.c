#include <stdio.h>
#include <string.h>

//Encontre e imprima a primeira ocorrência
//do caractere 'a' no nome de umautor usando strchr().


int main(){

char nome[20] = "Aleij";
char *ptr = strchr(nome, 'A');

if(ptr){
    printf("Encontrado");
} else{
    printf("nao encontrado");
}




}