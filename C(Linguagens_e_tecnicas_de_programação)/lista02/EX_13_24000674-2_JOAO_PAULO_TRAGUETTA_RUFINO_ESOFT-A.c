#include <stdio.h>


int main (){
    int pontos;
    
    printf("Digite sua quantidade de pontos:");
    scanf("%d", &pontos);

    if(pontos < 100) {
        printf("Voce ganhou 10 reais a mais");
    }

    if(pontos >= 100 && pontos < 200) {
        printf("Voce ganhou 20 reais a mais");
    }

    if(pontos >= 200 && pontos <= 300) {
        printf("Voce ganhou 30 reais a mais");
    }




    return 0;
}