#include <stdio.h>


int main(){
    float temp, humidade, total;

    printf("Digite a tempera e a humidade do ar em porcentagem");
        scanf("%f %f", &temp, &humidade);
    total = temp + 0.55 * (humidade - 50);

    printf("O valor da sensação termica eh de %.2f graus celcius", total);

    



    return 0;
}