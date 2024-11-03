#include <stdio.h>
#include <string.h>

int main(){

     char frase[100];
    int frequencia[256]; 

    printf("Digite uma frase: ");
    scanf("%s", &frase);
    
    for (int i = 0; i < 256; i++) {
        if (frequencia[i] > 0) {
            printf("'%c' = %d\n", i, frequencia[i]);
        }
    }
    




    return 0;
}