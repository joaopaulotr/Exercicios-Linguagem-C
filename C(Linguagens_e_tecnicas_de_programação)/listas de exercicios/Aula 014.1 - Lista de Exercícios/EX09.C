    //Leia uma matriz 4x4 e determine e imprima o maior
//valor e sua localização (linha e coluna)

#include <stdio.h>


int main(){

    int matriz1[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int i=0, a=0;
    int maiorvalor = 0;
    int loc = 0;
    int loc2 = 0;

    for (int i = 0; i < 4; i++){//linha
     for (int i = 0; i < 4; i++){ //coluna

        printf("%d ", matriz1[i][i]);
        if (matriz1[i][a]>maiorvalor)
        {   
            maiorvalor = matriz1[i][a];
            loc = i;
            loc2 = a;
        }
        
     } 
    } 

    printf("o maior valor é %d e está localizado na linha %d e coluna %d", maiorvalor, i, a);

    return 0;
}