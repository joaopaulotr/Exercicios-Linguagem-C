#include <stdio.h>
#include <string.h>

int main(){
    int i = 11;
    int ala[10];

    for(i = 0; i < 10; i++){
        printf("Digite um numero\n");
        scanf("%d", &ala[i]);
    }
    for(i = 10; i > 0; i--){
        printf("%d\n", ala[i]);
    }


    return 0;
}