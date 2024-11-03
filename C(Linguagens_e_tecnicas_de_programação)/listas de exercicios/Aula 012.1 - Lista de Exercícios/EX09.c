#include <stdio.h>
#include <string.h>

int main(){


//Encontre e imprima a primeira ocorrência
//da substring "lib" no nome da biblioteca usando strstr().

char st[20]= "liberdade";
char *ptr = strchr(st,"lib");

if (ptr){

    printf("Encontrado");
} else{
    printf("Nao encontrado");
}


    return 0;
}