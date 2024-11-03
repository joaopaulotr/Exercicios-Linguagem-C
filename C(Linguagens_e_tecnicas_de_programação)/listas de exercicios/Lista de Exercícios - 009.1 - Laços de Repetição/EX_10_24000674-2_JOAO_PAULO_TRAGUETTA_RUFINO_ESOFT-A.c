#include <stdio.h>

int main(){
int i=0, nb=0,nf=0, alunos=0, mediab=0, mediaf=0;

printf("quantos alunos voce deseja descobrir a media?\n");
scanf("%d", &alunos);

for(i = 1; i <= alunos; i++){
    printf("Digite uma nota de biologia");
    scanf("%d", nb);
    mediab+=nb;
    printf("Digite uma nota de fisica");
    scanf("%d", nf);
    mediab+=nf;

    }

    
    printf("a media dos alunos em biologia eh: %d\n", mediab/alunos);
    printf("a media dos alunos em biologia eh: %d\n", mediaf/alunos);

    return 0;
}