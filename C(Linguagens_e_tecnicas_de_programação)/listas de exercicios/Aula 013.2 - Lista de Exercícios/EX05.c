#include <stdio.h>
#include <string.h>

int main(){
    int i = 0;
    int soma =0;
    int ala[10];

    for(i = 0; i < 10; i++){
        printf("Digite um numero\n");
        scanf("%d", &ala[i]);
       soma += ala[i] ;
    }
    printf("%d", soma/10);
    
    
    return 0;
    }