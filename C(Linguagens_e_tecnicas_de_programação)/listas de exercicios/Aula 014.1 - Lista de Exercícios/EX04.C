#include <stdio.h>

//Dadas duas matrizes 3x3, leia ambas e imprima a
//matriz resultante da sua soma.



int main(){

    int matriz1[3][3] = {1,2,3,4,5,6,7,8,9};
    int matriz2[3][3] = {1,2,3,4,5,6,7,8,9};
    int i,a,b;

    
    for(i = 0 ; i < 3; i++){ //linha
        for(a = 0 ; a<3; a++){ //coluna
            printf("%d ",matriz1[i][a] + matriz2[i][a]);
        }
        printf("\n");
    }


    return 0;
}