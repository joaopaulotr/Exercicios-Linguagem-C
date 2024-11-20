#include <stdio.h>


int main(){
    char nomes[10][100];
        char sobrenomes[10][100];

    int x,y;

   for(x = 0; x<10 ; x++){
    printf("Digite um nome");
       gets(nomes[x]); 
           printf("Agora um sobrenome");
                gets(sobrenomes[x]);
   };
        x=0;

   for(x = 0; x<10 ; x++){
        printf("%s %s",nomes, sobrenomes);   
};



    return 0;
}