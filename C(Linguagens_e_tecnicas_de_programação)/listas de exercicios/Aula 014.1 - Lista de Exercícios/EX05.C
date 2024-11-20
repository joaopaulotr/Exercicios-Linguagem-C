//Solicite duas matrizes 10x10 (o usuário deverá
//informar os números inteiros). E depois, numa
//terceira matriz, atribuia o resultado da multiplicação
//das matrizes
#include <stdio.h>


int main(){

    int matriz1[10][10];
    int matriz2[10][10];
    int matriz3[10][10];

    int i=0, a=0;

    
    for (int i = 0; i < 10; i++){//linha
    for(int a = 0; a < 10; a++){ //coluna

        printf("Digite um núemro inteiro\n");
        scanf("%d", &matriz1[i][a]);
        printf("Agora digite outro número inteiro para a 2 matriz\n");
        printf("%d", &matriz2[i][a]);
        matriz3 = matriz1 [i][a] * matriz2[i][a];
        }
    }    

    int i=0, a=0;

    for (int i = 0; i < 10; i++){//linha
    for(int a = 0; a < 10; a++){ //coluna

        printf("%d ", matriz3[i][a]);
        }
        printf("\n");
    }   
 

    return 0;
}