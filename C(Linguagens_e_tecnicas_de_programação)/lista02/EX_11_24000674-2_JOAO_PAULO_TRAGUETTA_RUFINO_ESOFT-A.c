#include <stdio.h>


int main(){
    int lado1, lado2, lado3;
    printf("Digite os 3 lados do seu triangulo: \n");
    scanf("%d%d%d" &lado1,&lado2,&lado3);

 //Equilátero: Todos os três lados têm o mesmo comprimento.
//Isósceles: Dois lados têm o mesmo comprimento, e o terceiro é diferente.
//Escaleno: Todos os três lados têm comprimentos diferentes.

if(lado1 == lado 2 && lado1 == lado3 && lado2 == lado3){
printf("Triangulo equilatero");
}
if(lado1 == lado2 && lado1 != lado3) || (lado2 == lado3 && lado1 != lado1) || (lado3 == lado1 && lado1 != lado2){
printf("Triangulo isoceles");
}
if(lado1 != lado 2 && lado1 != lado3 && lado2 != lado3){
printf("Triangulo escaleno");
}

    return 0;
}