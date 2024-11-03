#include <stdio.h>


int main(){
    int i, qnt, media, a;

    printf("Digite o numero de alunos\n");
    scanf("%d", &qnt);
    for(i = 1; i <= qnt; i++){
        printf("Digite a altura do aluno em cm. EX: 179: \n");
        scanf("%d", &a);
        media += a;
    }

    printf("A media das alturas dos alunos eh: %d\n", media/qnt);




    return 0;
}