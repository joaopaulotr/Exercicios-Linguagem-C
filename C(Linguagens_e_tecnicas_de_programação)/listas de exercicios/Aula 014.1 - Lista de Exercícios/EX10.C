

  //  Leia uma matriz 4x3 e imprima a soma dos
//elementos de cada linha.


#include <stdio.h>


int main(){


int matriz1[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};

    int i=0, a=0;

    
    for (int i = 0; i < 4; i++){//linha

        printf("%d", matriz1[i][1] + matriz1[i][2] + matriz1[i][3]);
        
        }
    
//  1 2 3 
//1 1 2 3 =6
//2 4 5 6 =15
//3 7 8 9 = 24
//4 10 11 12 = 33 
    return 0;
}