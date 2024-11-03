#include <stdio.h>
#include <string.h>

//Declare duas strings: uma como nome da
//biblioteca e outra vazia.Copie o nome da biblioteca
//para a string vazia usando strcpy() e imprima a segunda
//string.



int main (){

    char bib[20] = "string.h";
    char bib2[20];

    strcpy(bib2 ,bib);

    printf("%s", bib2);



    return 0;
}