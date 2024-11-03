//Média de Notas
//Crie um programa que:
//Solicite ao usuário que informe a quantidade de notas
//que deseja inserir.
//Crie um vetor de float para armazenar essas notas.
//Após a entrada das notas, calcule e exiba a média
//delas.


#include <stdio.h>
#include <string.h>

int main(){

    int qnt=0, i=0;
    float soma;

printf("QUantas notas deseja inserir?");
scanf("%d", &qnt);

float arm[qnt];

for(i = 0 ; i < qnt ; i++){
printf("Digite sua nota: ");
scanf("%f", &arm[i]);
}

for (i = 0; i < qnt; i++){
    soma += arm[i];
}

printf("%f", soma/qnt);


    return 0;
}
