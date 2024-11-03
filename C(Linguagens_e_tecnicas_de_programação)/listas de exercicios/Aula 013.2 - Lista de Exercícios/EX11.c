//Realizar a soma entre dois vetores, porém deve-se
//somar a posição + 1 do primeiro vetor, e o resultado
//deve ser atribuído em outro vetor do mesmo tipo.
//Apresente todos os vetores.

#include <stdio.h>
#include <string.h>

int main(){
    int i = 0;
    int ala[10];
        int ala2[10];
            int soma[10];


    for(i = 0; i < 2; i++){
        printf("Digite um numero\n");
        scanf("%d", &ala[i]+1);
    }
        i =0 ;

    for(i = 0; i < 2; i++){
        printf("Digite um numero\n");
        scanf("%d", &ala2[i]);}
   i = 0;

 for(i = 0; i < 2; i++){
    soma[i] += ala[i] + ala2[i];
 }

    
 for(i = 0; i < 2; i++){
    printf("%d", ala[i]);
        printf("%d", ala2[i]);
            printf("%d", soma[i]);

 }

 printf("%d", sub);

    return 0;
    }