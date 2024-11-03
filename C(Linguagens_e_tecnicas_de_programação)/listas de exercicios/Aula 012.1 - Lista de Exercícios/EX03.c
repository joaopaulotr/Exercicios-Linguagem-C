#include <stdio.h>
#include <string.h>

//Concatene duas strings que representamo
//primeiro e o último nome de umautor usando strcat().

int main(){

    char nome[20] = "Cleriton ";
    char sobrenome[20] = "Savio";
    
    strcat(nome, sobrenome);

    printf("%s", nome);




    return 0;
}