#include <stdio.h>
#include <string.h>

int main(){
    int i = 0;
    int maior =0;
        int menor =0;

    int ala[10];

    for(i = 0; i < 4; i++){
        printf("Digite um numero\n");
        scanf("%d", &ala[i]);
       if(menor>ala[i]){
            menor = ala[i];
       }
        if(maior<ala[i]){
            menor = ala[i];
       }
    }
    printf("%d\n", maior);
        printf("%d\n", menor);

    
    
    return 0;
    }