//Leia uma matriz 3x3 e imprima sua matriz
//transposta.

#include <stdio.h>

int main(){


int matriz[3][3] = {1,2,3,4,5,6,7,8,9};


for (int i = 0; i < 9; i++)
{
    printf("%d", matriz[i][1]);
}
i=0;

for (int i = 0; i < 9; i++)
{
    printf("%d", matriz[i][2]);
}

i=0;

for (int i = 0; i < 9; i++)
{
    printf("%d", matriz[i][3]);
}


//1 2 3 ->  1 4 7
//4 5 6 ->  2 5 8
//7 8 9 ->  3 6 9
    return 0;
}