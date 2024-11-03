//Inversão de um Vetor
//Desenvolva um programa que:
//Peça ao usuário para informar o tamanho de um
//vetor de float.
//Solicite que o usuário insira os elementos desse vetor.
//Crie um novo vetor que contenha os elementos do
//vetor original na ordem inversa.
//Exiba os elementos do vetor invertido.

#include <stdio.h>
#include <string.h>

int main(){
    int i = 0;
    int tam=0;

printf("Informe o tamanho de seu vetor");
scanf("%d", &tam);

float ala[tam];
float ala2[tam];


for(i = 0; i < tam; i++){
        printf("Digite um numero\n");
        scanf("%f", &ala[i]);}


for(i = 0; i < tam; i++){
    ala2[i] = ala[i]; 
}
i = tam;


for(i = 0; i < tam; i--){
        printf("%f", ala2[i]);
        }


return 0;}