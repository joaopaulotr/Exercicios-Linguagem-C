//Contar quantas vezes um dado número aparece no
//vetor.


#include <stdio.h>
#include <string.h>

int main(){
    int i;
    int ala[10];
    int contagem = 0;
    for(i = 0; i < 10; i++){
        printf("Digite um numero\n");
        scanf("%d", &ala[i]);
    }
    for(i = 0; i < 10; i++){
        if(ala[i] == 1){
            contagem++;
        }
        }
 printf("Seu vetor tem o numero 1 %d vezes", contagem);


    return 0;
}