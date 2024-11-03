
#include <stdio.h>
#include <string.h>

int main(){
    int i = 0;
    int ala[10];
        int ala2[10];
            int alo;


    for(i = 0; i < 2; i++){
        printf("Digite um numero\n");
        scanf("%d", &ala[i]+1);
    }
        i =0 ;

    for(i = 0; i < 2; i++){
        printf("Digite um numero\n");
        scanf("%d", &ala2[i]);}
   i = 0;

   for (i = 0 ; i < 2; i++){
    if(ala[i] == ala2[i]){
        alo++;
    }
   }

   if(alo == 2){
    printf("Os dois vetores são iguais");
   }


   return 0;}