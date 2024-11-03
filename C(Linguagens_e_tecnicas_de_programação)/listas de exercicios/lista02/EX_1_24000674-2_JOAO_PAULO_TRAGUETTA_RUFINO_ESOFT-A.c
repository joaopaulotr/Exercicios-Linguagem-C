#include <stdio.h>


int main(){
    int valor, valorfinal;

    printf("Digite o valor de sua compra e descubra seu desconto: \n");
    scanf("%d", &valor);

    
    if (valor < 100) {
        printf("Você não tem desconto");
    }
    else if (valor >= 100 && valor <=500 ) 
    {   
        valorfinal = valor;
        valor = (valor * 10) / 100;
        valorfinal = valorfinal - valor;
    
        printf("Seu desconto eh de 10 por cento, %d", valorfinal);
    }
    else if (valor > 500) {
        valorfinal = valor;
        valor = (valor * 10) / 100;
        valorfinal = valorfinal - valor;
        printf("Seu desconto eh de 20 por cento, %d", valorfinal);
    }
    




    return 0;
}