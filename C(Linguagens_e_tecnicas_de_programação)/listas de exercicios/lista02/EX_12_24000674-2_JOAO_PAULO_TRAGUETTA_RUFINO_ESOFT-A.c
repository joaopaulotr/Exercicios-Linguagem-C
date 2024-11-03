#include <stdio.h>


int main(){
    float base, addkm, km, total;

    printf("Digite quantos km vc rodou\n");
    scanf("%f", &km);
    printf("Digite a taxa base\n");
    scanf("%f", &base);
    printf("Digite a taxa adicional por km\n");
    scanf("%f", &addkm);

    total = base + (km * addkm);
    printf("%.2f eh o preco total", total);


    return 0;
}