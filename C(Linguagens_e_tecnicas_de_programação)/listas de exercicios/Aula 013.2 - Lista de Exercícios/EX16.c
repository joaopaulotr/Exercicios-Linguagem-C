//Cópia de Vetor
//Desenvolva um programa que:
//Solicite ao usuário que informe o tamanho de um
//vetor de float.
//Peça para o usuário inserir os elementos desse vetor.
//Crie um segundo vetor que será uma cópia do
//primeiro.
//Exiba os elementos do vetor copiado.


#include <stdio.h>
#include <string.g>

int main(){

int tam=0, i=0;

printf("Informe o tamanho de seu vetor");
scanf("%d", &tam);

int vet[tam];
int vet2[tam];

for(i = 0; i<tam; i++){
    printf("Agora insira os elementos de seu vetor")
    scanf("%d", vet[i]);
}

for(i = 0; i<tam; i++){
   strcpy(vet[i], vet2[i]);
}

for(i = 0; i<tam; i++){
   printf("%d",vet2[i]);
}

    return 0;
}