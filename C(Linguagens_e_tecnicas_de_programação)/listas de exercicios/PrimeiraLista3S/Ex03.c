/*Escreva um programa em linguagem C que solicite ao usuário um número inteiro N 
(entre 5 e 20). Em seguida, utilize um laço for para imprimir os números de 0 até N e de N até 0 simultaneamente.*/

#include <stdio.h>

int main(){
    int n;
    int i;

    printf("Digite um num entre 5 e 20");
    scanf("%d", &n);
    if (n >= 5 && n <= 20)
    {
        for ( i = 0; i < n; i++)
        {
            printf("%d | %d \n", i, n-i);
        }
        
    } else{
        printf("reinicie o programa número inválido");
    }
    
}