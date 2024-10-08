#include <stdio.h>


int main (){

    int sal, bonus;
    char ava;

    printf("Digite seu salário e sua avaliacao:\n");
    scanf("%d %c", &sal, &ava);

    switch (ava)
    {
    case 'A':
        bonus = sal + sal * 15 / 100;
        printf("Seu salario com o bonus eh: %d", bonus);
        break;

        case 'B':
        bonus = sal + sal * 10 / 100;
        printf("Seu salario com o bonus eh: %d", bonus);
        break;

        case 'C':
         bonus = sal + sal * 5 / 100;
        printf("Seu salario com o bonus eh: %d", bonus);
        break;
    
    default:
    printf("Nao ha bonus");
        break;
    }



    return 0;
}