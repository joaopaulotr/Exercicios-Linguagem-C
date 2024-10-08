#include <stdio.h>
#include <string.h>

int main(){
    char usuario[20];
    char senha[20];
    char usuariol[20];
    char senhal[20];
    char conf;

    printf("CADASTRO: digite seu usuario e depois sua senha:\n");
    scanf("%s %s", usuario, senha);

    printf("Deseja logar? (S/N) ");
    scanf("%c", &conf);

    while (conf == 'S')
    {
    printf("LOGIN: digite seu usuario:\n");
    scanf("%s", usuariol);
        
    if(strcmp(usuariol, usuario) == 0){
        printf("digite sua senha:\n");
        scanf("%s", senhal);

    if (strcmp(senha, senhal) == 0){
                printf("acesso concedido!\n");
    } else {
                printf("acesso negado! Senha incorreta.\n");
            }
    } else {
            printf("acesso negado! Usuário incorreto.\n");
    }
    }

    return 0;
}
