#include <stdio.h>

int main(){
int i, num = 0, maior, menor;

        maior = num;
        menor = num;
    do
    {
        printf("Digite um num, se digitar um negativo vamos parar o programa e mostrar o maior e o menor numero");
        scanf("%d",&num);
        if (num < menor)
        {
            menor = num;
        }
        if (num > maior)
        {
            maior = num;
        }  
        if (num < 0)
        {
            i = 1;
        }
        
    } while (i != 1);
    


    return 0;
}