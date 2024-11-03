#include <stdio.h>


int main(){

int i, a;

i = rand() % 100;

do
{
 printf("Digite um num de 0 a 100");
scanf("%d", &a);
} while (i != a);

printf("Parabens vc acertou!");


}