#include <stdio.h>
#include <string.h>

int main(){
    char livro[20] = "livrouno";
    char prim4[4];
    char livro2[20] = "livroduois";
    char prim42[4];



    strncat(livro, prim4, 4);
        strncat(livro2, prim42, 4);
        if(strncmp(prim4,prim42, 4)< 0){
            printf("Liro 1 eh maior");
        } else{
            printf("Livro 2 eh maior");
        }



}