#include <stdio.h>

int verificarnota(int nota){
    if (nota >= 0 && nota <= 10 ){
        return 1;
    }
    else{

        return 0;
    }
}



int main(){
    char nome[20];
    int nota1=0, nota2=0, aprov =0, reprov=0, media=0, i;

 for ( i = 0; i <= 32; i++)
 {
    printf("Digite seu nome");
        scanf("%s", &nome);
    printf("Digite sua primeira nota");
        scanf("%d", &nota1);
        if (verificarnota(nota1) == 1){
            media += nota1;
            printf("Digite sua segunda nota");
            scanf("%d", &nota2);
                if (verificarnota(nota2) == 1)
                    {
                    media += nota2;
                    } else{
                      printf("Nota invalida");
                    }
        } else{
        printf("Nota invalida");
        }

    if ((nota1 + nota2) / 2 >= 6 && (nota1 + nota2) / 2 <= 10 ){
        aprov++;
    } else{
        reprov++;
    }
 }
 
printf("A media da turma eh: %d por cento", media/64);
printf("Porcentagem de aprovados = %d", (aprov*100)/32);
printf("Porcentagem de reprovados = %d", (reprov*100)/32);

//--------------------------------------------------------------------------------------------------------------------------------------


while (i <= 32)
 {
    printf("Digite seu nome");
        scanf("%s", &nome);
    printf("Digite sua primeira nota");
        scanf("%d", &nota1);
        if (verificarnota(nota1) == 1){
            media += nota1;
            printf("Digite sua segunda nota");
            scanf("%d", &nota2);
                if (verificarnota(nota2) == 1)
                    {
                    media += nota2;
                    } else{
                      printf("Nota invalida");
                    }
        } else{
        printf("Nota invalida");
        }

    if ((nota1 + nota2) / 2 >= 6 && (nota1 + nota2) / 2 <= 10 ){
        aprov++;
    } else{
        reprov++;
    }
    i++;
 }
 
printf("A media da turma eh: %d por cento", media/64);
printf("Porcentagem de aprovados = %d", (aprov*100)/32);
printf("Porcentagem de reprovados = %d", (reprov*100)/32);

//------------------------------------------------------------------------------------------------------------------------

do
{
    
    printf("Digite seu nome");
        scanf("%s", &nome);
    printf("Digite sua primeira nota");
        scanf("%d", &nota1);
        if (verificarnota(nota1) == 1){
            media += nota1;
            printf("Digite sua segunda nota");
            scanf("%d", &nota2);
                if (verificarnota(nota2) == 1)
                    {
                    media += nota2;
                    } else{
                      printf("Nota invalida");
                    }
        } else{
        printf("Nota invalida");
        }

    if ((nota1 + nota2) / 2 >= 6 && (nota1 + nota2) / 2 <= 10 ){
        aprov++;
    } else{
        reprov++;
    }
    i++;
 }


} while (i <= 32);

printf("A media da turma eh: %d por cento", media/64);
printf("Porcentagem de aprovados = %d", (aprov*100)/32);
printf("Porcentagem de reprovados = %d", (reprov*100)/32);


    return 0;}
