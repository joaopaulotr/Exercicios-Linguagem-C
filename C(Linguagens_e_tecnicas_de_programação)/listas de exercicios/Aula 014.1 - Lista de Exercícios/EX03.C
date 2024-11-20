//Solicite uma lista de nomes de alunos e receba as
//notas de uma prova de um bimestre. No final
//apresente a média de todas as notas, a maior nota
//(e o nome do aluno) e a menor nota (e o nome do
//aluno).


#include <stdio.h>


int main(){
    char nomes[5][100];
    int notas[5];
    int idx = 0;
    int idx2 = 0;
    int x;
    int  maiorn=0, menorn=0;
    float media;

   for(x = 0; x<5 ; x++){
    printf("Digite um nome");
       gets(nomes[x]);
    printf("Digite sua nota");
    scanf("%d", notas[x]);
    if(notas[x] > maiorn){
        maiorn = notas[x];
        idx = x;
    }
    if(notas[x] < menorn){
        menorn = notas[x];
        idx2 = x;
    }

    media += notas[x];
   };

    printf("A media de todas as 5 notas é: %f\n", media/5);
    printf("O aluno  com maior nota foi o [%d] e sua nota foi: %d", notas[idx], maiorn);
        printf("O aluno  com a menor nota foi o [%d] e sua nota foi: %d", notas[idx2], maiorn);




    return 0;
}