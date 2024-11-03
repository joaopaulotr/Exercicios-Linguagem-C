#include <stdio.h>
#include <string.h>

int main(){
    int i;
    int ala[10];

    for(i = 0; i < 2; i++){
        printf("Digite um numero\n");
        scanf("%d", &ala[i]);
    }
    for(i = 0; i < 10; i++){
        if(ala[i] == 1){
            printf("Seu vetor tem o numero 1");
        }

        }


    return 0;
}