//Leia e armazene uma matriz 4x4 e imprima os
//elementos da diagonal principal.

#include <stdio.h>

int main(){
    int matriz1[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int i=0, a=0;

    for (int i = 0; i < 4; i++){//linha

        printf("%d ", matriz1[i][i]);
        
    } 


//      1 2 3 4
//    1 1 0 0 0 - 11
//    2 0 6 0 0 - 22
//    3 0 0 11 0 - 33
//    4 0 0 0 16 - 44
    return 0;
}