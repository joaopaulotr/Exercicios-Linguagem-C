#include <stdio.h>
#include <string.h>
//CRIPTOGRAFIA PARA FRENTE 3 letras

int main(){

    char senha[100];
    int i;

    printf("Digite sua senha");
    scanf("%s", senha);

    for(i = 0; i < strlen(senha) ; i++){
            senha[i] += 3;
        }

    printf("sua senha criptografada é: %s", senha);

     for(i = 0; i < strlen(senha) ; i++){
            senha[i] -= 3;
        }

    printf("sua senha descriptografada é: %s", senha);


    return 0;
}