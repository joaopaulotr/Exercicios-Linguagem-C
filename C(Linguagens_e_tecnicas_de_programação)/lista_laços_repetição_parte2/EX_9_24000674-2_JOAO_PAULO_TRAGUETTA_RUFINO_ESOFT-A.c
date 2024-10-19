#include <stdio.h>

int main(){

int i, idade, m = o, media;
char nome[20];
char sexo;
char afirm;


for (i=0; i<=3; i++0){
    printf("Digite seu nome");
    scanf("%c", &nome);
    printf("Digite sua idade");
    scanf("%d", &idade);
    printf("Digite seu sexo (F|M)");
    scanf("%c", sexo);
    if (sexo == 'F'){
        m++;
    }
}
    printf("Deseja continuar a entrevista? (S|N)");
    scanf("%c", afirm);

    if (afirm == 'S') {
        for (i=0; i<=3; i++){
    printf("Digite seu nome");
    scanf("%s", &nome);
    printf("Digite sua idade");
    scanf("%d", &idade);
    printf("Digite seu sexo (F|M)");
    scanf(" %c", sexo);
    if (sexo == 'F'){
        m++;
    }
}
    } else{
        printf("existem %d por cento de mulheres", m/3);
    }



/*

    while (afirm == 'S')
    {
        printf("Deseja fazer a entrevista? (S|N)");
        scanf("%c", afirm);
        while (i<=3){
    printf("Digite seu nome");
    scanf("%s", &nome);
    printf("Digite sua idade");
    scanf("%d", &idade);
    printf("Digite seu sexo (F|M)");
    scanf(" %c", sexo);
    i++;
    if (sexo == 'F'){
        m++;
    }
    }
      printf("existem %d por cento de mulheres", m/3);   
    }
    
    
    do
    {
      printf("Deseja fazer a entrevista? (S|N)");
    scanf("%c", afirm);

//================================================================================================================
    do
    {
        printf("Digite seu nome");
    scanf("%s", &nome);
    printf("Digite sua idade");
    scanf("%d", &idade);
    printf("Digite seu sexo (F|M)");
    scanf(" %c", sexo);
    if (sexo == 'F'){
        m++;
    }
    i++;
    } while (i<=3);
    

    } while (afirm == 'S');
    


*/
    return 0;
}