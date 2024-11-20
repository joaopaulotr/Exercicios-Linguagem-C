//Verifique se uma matriz 3x3 lida é simétrica. Uma
//matriz é simétrica se ela é igual à sua transposta.

#include <stdio.h>


int main(){

int matriz[3][3] = {1,1,1,1,1,1,1,1,1};
int matriz2[3][3] = {1,1,1,1,1,1,1,1,1};


for (int i = 0; i < 9; i++)
{
    if (matriz[i][1] == matriz2[i][1])
    {
        printf("%d", matriz[i][1]);
        printf("%d", matriz2[i][1]);
    }
    
    
 
}
i=0;

for (int i = 0; i < 9; i++)
{
     if (matriz[i][2] == matriz2[i][2])
    {
        printf("%d", matriz[i][2]);
        printf("%d", matriz2[i][2]);
    }
    
}

i=0;

for (int i = 0; i < 9; i++)
{
     if (matriz[i][3] == matriz2[i][3])
    {
        printf("%d", matriz[i][3]);
        printf("%d", matriz2[i][3]);
    }
    
}




    return 0;
}