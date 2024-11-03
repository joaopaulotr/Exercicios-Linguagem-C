#include <stdio.h>
#include <string.h>


//elimina os espaçs em branco

int main(){
char frase[100];


    printf("Digite uma frase: ");
    scanf("%s", &frase);

    char *token = strtok(frase, " ");
    while (token != NULL){
        printf("%s", token);
        token = strtok(NULL, " ");
    }
    


    return 0;
}