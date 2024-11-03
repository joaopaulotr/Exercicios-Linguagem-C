#include <stdio.h>

int main() {
    float total = 0, gasosa = 0;
    int distancia = 0, consumo = 0;

    printf("Para calcular o preço de sua viagem, digite a distância em KM:\n");
    scanf("%d", &distancia);
    
    printf("Quanto seu veículo consome em média por KM: \n");
    scanf("%d", &consumo);
    
    printf("Agora digite o preço da gasolina: \n");
    scanf("%f", &gasosa);

    total = (float) distancia / consumo;

    printf("Seu carro precisa de %f litros para executar o percurso\n", total);
    
    total = total * gasosa;

    printf("O total será R$ %f\n", total);

    return 0;
}
