#include <stdio.h>


int main() {

    float real, dolar;
    printf("Digite um valor em dolares para fazer a conversao em real: (digite com ponto em vez de virgula) \n");
    scanf("%f",&real);
    dolar = 5.60;
    real = real / dolar;

    printf("%f convertidos para real sao %f", dolar, real);


    return 0;
}