#include <stdio.h>
#include <string.h>

//escreve primeira frase e segunda, concatena procurar nessa frase se tem a coisa que o usuario escreveu

int main(){


    char frase1[100] = "banana ana banana"
    char frase2[100] = "ana banana ana"
    char frase3[100] = strcat(frase1,frase2);
    char *algo = strstr(frase3,algo);
 
    
    printf("%s", strcat(frase1, frase2));

    printf("Agora digite para procurar algo da frase");
    scanf("%s", algo);

    if (algo)
    {
        printf("Encontrado");
    } else{
        printf("Não encontrado");
    }
    
    return 0;
}