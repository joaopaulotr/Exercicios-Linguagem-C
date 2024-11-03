//Crie uma string que armazene o nome da
//biblioteca qualquer e imprima seu comprimento
//usando strlen().

#include <stdio.h>
#include <string.h>

int main (){
    
    char biblio[200];
    int tam;

    printf("\nDigite um nome de uma biblioteca: ");
    scanf("%s", biblio);
    printf("\no tamanho da string eh: %lu", strlen(biblio));


    return 0;
}