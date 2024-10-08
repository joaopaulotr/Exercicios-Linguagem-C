#include <stdio.h>

int main(){
    
    int maior, n, i;

    printf("Digite um número");
    scanf("%d", &n);
    maior = n;

    for(i = 2; i <= 10; i++){
         printf("Digite um número: ");
         scanf("%d", &n);

         if(n>maior){
            maior = n;

         }


    }

    printf("O maior número entre os digitados eh: %d", maior);


    return 0;  
}