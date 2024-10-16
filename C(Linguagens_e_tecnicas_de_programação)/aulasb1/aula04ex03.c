/* 
   Arquivo: Aula04ex03.C
   Arquivo único.
   Aula 13/08/2024
   Autor: João Paulo Traguetta Rufino
   case's
*/

#include <stdio.h>

int main(){
    float n1,n2; //pode ser com virgula e armazena 32 bits
    char op; // + - * / char para caracteres
    printf("Digite a operacao + ou - ou / ou *:");
    scanf("%c", &op);
    printf("Digite dois numeros para realizarmos a operacao escolhida: \n");
    scanf("%f%f",&n1,&n2);
    switch (op) //escolha, caso
    {
        case '+':
    printf("%.2f + %.2f = %.2f",n1,n2,n1+n2);
        break;

        case '-':
    printf("%.2f - %.2f = %.2f",n1,n2,n1-n2);
        break;

        case '*':
    printf("%.2f * %.2f= %.2f",n1,n2,n1*n2);
        break;

        case '/':
    printf("%.2f / %.2f = %.2f",n1,n2,n1/n2);
        break;

    default: 
    printf("Voce nao digitou uma operacao valida"); // caso contrario
        break;
    }
    return 0;
}
