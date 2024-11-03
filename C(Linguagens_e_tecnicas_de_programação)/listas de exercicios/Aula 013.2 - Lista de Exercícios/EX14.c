//Contagem de Números Pares e Ímpares
//Desenvolva um programa que:
//Peça ao usuário para inserir 10 números inteiros.
//Armazene esses números em um vetor de int.
//Conte e exiba quantos desses números são pares e
//quantos são ímpares.

#include <stdio.h>
#include <string.h>


int main(){
    int arm[10];
    int impar = 0, i;
    int par = 0;
    
    for(i = 0 ; i <10 ; i++){
        printf("Digite um numero");
        scanf("%d", &arm[i]);
        if(arm[i] % 2 == 0){
            par+=1;
        } else{
            impar+=1;
        }
    }

    printf("%d numeros pares", par);
        printf("%d numeros impares", impar);

    return 0;
}