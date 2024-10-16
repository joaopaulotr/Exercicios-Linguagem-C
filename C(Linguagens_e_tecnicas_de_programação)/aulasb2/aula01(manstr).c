#include <stdio.h>
#include <string.h>

int main (){
    char mensagem[] = "HOJE EH TERÇAFEIRA";
    int i;

    printf("Total de caracteres: %d", strlen(mensagem)); //comando que coloca no sistema a quantidade de caracteres

    for(i = 0; i<strlen(mensagem); i++);{

    printf("\n%c", mensagem[i]);
    }

printf("\n\n") //-------------------------------------------------------------------------------------------------------

for (i=0; i<strlen(mensagem); i++){// se o I for espaço ele vai quebrar a linha se nao continua com a frase normalmente

    if(mensagem[i]!=' '){
        printf("%c", mensagem[i])
    } else {
        printf("\n")
    }
}

printf("\n\n")//-------------------------------------------------------------------------------------------------------

int totalvogais = 0;

for (i=0; i<strlen(mensagem); i++){ //aqui contamos vogais
    if (mensagem[i] == 'A' || mensagem[i] == 'E' || mensagem[i] == 'I' || mensagem[i] == 'O' || mensagem[i] == 'U' ||){ 
        totalvogais++;
    }
    printf("o total de vogais eh: %d", totalvogais);
}

printf("\n\n")//-------------------------------------------------------------------------------------------------------

i = 0;
while(i<strlen(mensagem)){ //substitui os caracteres de a=1 e=2 i=3 o=4 u=5
    i++;
    if(mensagem[i] == 'A'){
        mensagem[i] = '1'
    }
    if(mensagem[i] == 'E'){
        mensagem[i] = '2'
    }
    if(mensagem[i] == 'I'){
        mensagem[i] = '3'
    }
    if(mensagem[i] == 'O'){
        mensagem[i] = '4'
    }
    if(mensagem[i] == 'U'){
        mensagem[i] = '5'
    }
}

printf("%c", mensagem[i])

printf("\n\n")//-------------------------------------------------------------------------------------------------------

//strcpy(DESTINO, ORIGEM); *nao usar cpy 2 vezes pois ele SUBSTITUI o valor da variável
//strcat(DESTINO, ORIGEM);

return 0;
}