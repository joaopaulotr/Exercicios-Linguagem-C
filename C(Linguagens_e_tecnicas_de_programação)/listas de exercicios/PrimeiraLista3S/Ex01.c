/*1) Um grupo de amigos resolve fazer uma ação beneficente para arrecadar dinheiro com intuito de 
ajudar o João que teve seu PC avariado em uma enchente, bem como muitos outros eletrônicos.
Serão aceitas doações de no máximo 100 pessoas ou até que o valor total arrecadado seja
 igual ou superior a R$ 7.500,00.

Apresentando no final, a média de valor doado por pessoa. */

#include <stdio.h>

int main(){
    int total = 0;
    int din = 0;
    int pessoas = 0;

    while (din <= 7500 && pessoas <= 100)
    {
        printf("Digite o valor doado");
        scanf("%f", &din);
        total += din;
        din = 0;
        pessoas++;
    }
    
    printf("%f é a media doada pelas pessoas", total/pessoas);

}