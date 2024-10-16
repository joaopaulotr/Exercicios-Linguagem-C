#include <stdio.h>

int maior, i, n;
int maiornum(int n, int maior);

int main(){
    printf("Digite um número: ");
    scanf("%d", &n);
    maior = n;
    
    for (i = 2; i <= 10; i++){
        printf("Digite um número: ");
        scanf("%d", &n);
        maior = maiornum(n, maior); 
    }

    printf("O maior número é %d\n", maior);

    return 0;
}

int maiornum(int n, int maior){
    if (n > maior){
        maior = n;
    }
    return maior; 
}