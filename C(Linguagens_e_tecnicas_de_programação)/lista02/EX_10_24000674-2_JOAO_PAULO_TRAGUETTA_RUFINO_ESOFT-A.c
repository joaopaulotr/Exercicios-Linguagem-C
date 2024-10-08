#include <stdio.h>


int main(){
    int notas = 0, media = 0, qnt = 0, i;
    printf("Digite a quantidade de alunos na sala em questão:\n");
    scanf("%d", &qnt);

    for (i = 1; i < qnt; i++)
    {
        printf("Digite a nota do %d aluno:\n", i);
        scanf("%d", &notas);
        media = media + notas;
    }
    
    if(media/qnt >= 6) {
        printf("Sala aprovada");
    } else {
        printf("Sala reprovada");
    }


    return 0;
}