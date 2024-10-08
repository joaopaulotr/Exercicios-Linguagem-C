#include <stdio.h>
 
 int main () {

    char senha[100];
      char senha2[100];

    printf("Digite uma senha que tem que ter no minimo 8 caracteres, conter uma maiuscula, uma minuscula, um numero e um caractere especial.:\n");
    scanf("%c", senha);

    printf("Agora faça login, digite sua senha novamente:");
    scanf("%c", senha2);

    if(senha == senha2)
    {
        printf("Acesso concedido");
    }else{
        printf("Acesso negado");
    }


    return 0;
 }