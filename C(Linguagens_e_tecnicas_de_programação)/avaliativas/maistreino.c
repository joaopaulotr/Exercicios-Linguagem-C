

Exercício 1 - Alunos, notas e arquivo texto

Descrição: O programa deve receber o nome de até 10 alunos, cada um com 3 notas, calcular a média, determinar se foi aprovado (média ≥ 7) ou reprovado, exibir esses dados e salvá-los em um arquivo texto.


#include <stdio.h>
#include <string.h>

int main(){



    int qtalunos, i = 0;
    float nota1[qtalunos];
    float nota2[qtalunos];
    float nota2[qtalunos];
    float media[qtalunos];
    int aluno[100][10];
    FILE *arquivo;

    printf("Digite a quantidade de alunos que deseja calcular a media");
        scanf("%d", &qtalunos);
    if(qtalunos > 10){
        printf("Excedeu o limite, rode novamente o programa");
    } else {
        for ( i = 0; i < alunos; i++)
        {
            printf("Digite o nome do primeiro aluno");
            scanf("%s", aluno[i]);
            printf("Digite uma nota");
            scanf("%d", nota1[i]);
            printf("Digite uma nota");
            scanf("%d", nota2[i]);
            printf("Digite uma nota");
            scanf("%d", nota3[i]);

            media[i] = (nota1[i] + nota2[i] + nota3[i])/3;
        }   
    }

i = 0;
    arquivo = fopen("resultados.txt", "w");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir arquivo");
    } else {
        for ( i = 0; i < alunos; i++)
        {
            fprintf("%s: | NOTA 1:%d NOTA 2: %d | NOTA 3:%d | MEDIA: %d", nome[i], nota1[i], nota2[i], nota3[i]);
                    }   
    }
    
    

    fclose(arquivo);

    return 0;
}




Exercício 2 - Contar e localizar ocorrências de um caractere

Descrição: O programa deve ler uma frase, um caractere a ser procurado, contar quantas vezes ele aparece e exibir as posições de suas ocorrências.


#include <stdio.h>
#include <string.h>

int main() {
    char frase[200], caractere;
    int ocorrencias = 0;

    printf("Digite uma frase: ");
    scanf(" %[^\n]", frase);

    printf("Digite o caractere que deseja buscar: ");
    scanf(" %c", &caractere);

    printf("Procurando '%c' em \"%s\"...\n", caractere, frase);

    printf("Posições: ");
    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == caractere) {
            printf("%d ", i);
            ocorrencias++;
        }
    }

    printf("\nOcorrências: %d\n", ocorrencias);
    return 0;
}

Exercício 3 - Maior e menor nota por disciplina

Descrição: O programa deve ler notas de 3 disciplinas, calcular a maior e menor nota de cada disciplina.



#include <stdio.h>

#define DISCIPLINAS 3
#define NOTAS 3

int main() {
    float notas[DISCIPLINAS][NOTAS];
    float maior, menor;

    for (int i = 0; i < DISCIPLINAS; i++) {
        printf("\nNotas para a disciplina %d:\n", i + 1);
        for (int j = 0; j < NOTAS; j++) {
            printf("Digite a nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    for (int i = 0; i < DISCIPLINAS; i++) {
        maior = notas[i][0];
        menor = notas[i][0];
        for (int j = 1; j < NOTAS; j++) {
            if (notas[i][j] > maior) {
                maior = notas[i][j];
            }
            if (notas[i][j] < menor) {
                menor = notas[i][j];
            }
        }
        printf("\nDisciplina %d - Maior nota: %.2f, Menor nota: %.2f\n", i + 1, maior, menor);
    }

    return 0;
}

