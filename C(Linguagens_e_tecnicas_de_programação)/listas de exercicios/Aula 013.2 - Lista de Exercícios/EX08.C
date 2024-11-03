//Contar quantas vezes um dado número aparece no
//vetor.


#include <stdio.h>
#include <string.h>

int main(){
    int i;
    int ala[10];
    int contagem;
    for(i = 0; i < 10; i++){
        printf("Digite um numero\n");
        scanf("%d", &ala[i]);
        if(ala[i] == 1){
            contagem = i;
        }
    }
 
    printf("O seu numero esta na posicao %d no vetor", contagem);


    return 0;
}