// 1) Conclua o programa abaixo onde a estrutura deverá possuir:
// nome
// telefone
// email
// cpf

// Crie um vetor (de tamanho 3) onde serão armazenados os dados de 3 pessoas (solicitar ao usuário)

// Posteriormente, crie variáveis de ponteiro (uma para cada variável) e posteriormente atribua o valor 10 para a variável x.
// Em seguida, a variável y deverá possuir o dobro da variável x, variável z deverá possuir 10 vezes o valor de y, subtraindo o valor 20 do valor final.
// O valor atribuído para a variável Z deverá vir através de seu ponteiro.
// A variável w receberá o terceiro caractere do segundo nome do vetor.
// A variável k deverá receber a metade do valor da variável ao qual z está apontando.
// A variável n deverá receber apenas 32,5% do valor atribuído a soma das variáveis x e y, mas os valores deverão vir de seus respectivos ponteiros.

// Ao usuário:
// Mostre o valor de cada variável, bem como seu endereço de memória
// Mostre o valor de cada ponteiro, bem como o seu endereço de memória
// Mostre o endereço de memória que cada ponteiro aponta
// Mostre o consumo em bytes de cada variável, ponteiro e estrutura.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoas
{
    char nome[50];
    char telefone[15];
    char email[50];
    char cpf[15];
};


int main(){
int i = 0;
int x;int y;int z;
char w;
float k;
double n;
int *pnt_x = &x;
int *pnt_y = &y;
int *pnt_z = &z;
char *pnt_w = &w;
float *pnt_k = &k;
double *pnt_n = &n;
x = 10;
y = 2 * x;
*pnt_z = 10 * y - 20;


struct pessoas pessoa[3];

    for ( i = 0; i < 3; i++)
    {
        printf("Digite o nome da pessoa %d: ", i + 1);
        fgets(pessoa[i].nome, 50, stdin);
        printf("Digite o telefone da pessoa %d: ", i + 1);
        fgets(pessoa[i].telefone, 15, stdin);
        printf("Digite o email da pessoa %d: ", i + 1);
        fgets(pessoa[i].email, 50, stdin);
        printf("Digite o cpf da pessoa %d: ", i + 1);
        fgets(pessoa[i].cpf, 15, stdin);
    }

    w = pessoa[1].nome[2];
    k = *pnt_z / 2;
    n = 0.325 * (*pnt_x + *pnt_y);

    printf("Valor de x: %d\n", x);
    printf("Endereco de x: %p\n", &x);
    printf("Valor de y: %d\n", y);
    printf("Endereco de y: %p\n", &y);
    printf("Valor de z: %d\n", z);
    printf("Endereco de z: %p\n", &z);
    printf("Valor de w: %c\n", w);
    printf("Endereco de w: %p\n", &w);
    printf("Valor de k: %f\n", k);
    printf("Endereco de k: %p\n", &k);
    printf("Valor de n: %lf\n", n);
    printf("Endereco de n: %p\n", &n);

    printf("=====================================\n");

    printf("Valor de pnt_x: %p\n", pnt_x);
    printf("Endereco de pnt_x: %p\n", &pnt_x);
    printf("Valor de pnt_y: %p\n", pnt_y);
    printf("Endereco de pnt_y: %p\n", &pnt_y);
    printf("Valor de pnt_z: %p\n", pnt_z);
    printf("Endereco de pnt_z: %p\n", &pnt_z);
    printf("Valor de pnt_w: %p\n", pnt_w);
    printf("Endereco de pnt_w: %p\n", &pnt_w);
    printf("Valor de pnt_k: %p\n", pnt_k);
    printf("Endereco de pnt_k: %p\n", &pnt_k);
    printf("Valor de pnt_n: %p\n", pnt_n);
    printf("Endereco de pnt_n: %p\n", &pnt_n);

    printf("=====================================\n");

    printf("Endereco de memoria que pnt_x aponta: %p\n", pnt_x);
    printf("Endereco de memoria que pnt_y aponta: %p\n", pnt_y);
    printf("Endereco de memoria que pnt_z aponta: %p\n", pnt_z);
    printf("Endereco de memoria que pnt_w aponta: %p\n", pnt_w);
    printf("Endereco de memoria que pnt_k aponta: %p\n", pnt_k);
    printf("Endereco de memoria que pnt_n aponta: %p\n", pnt_n);

    printf("=====================================\n");

    printf("Consumo de bytes de x: %d\n", sizeof(x));
    printf("Consumo de bytes de y: %d\n", sizeof(y));
    printf("Consumo de bytes de z: %d\n", sizeof(z));
    printf("Consumo de bytes de w: %d\n", sizeof(w));
    printf("Consumo de bytes de k: %d\n", sizeof(k));
    printf("Consumo de bytes de n: %d\n", sizeof(n));
    printf("Consumo de bytes de pnt_x: %d\n", sizeof(pnt_x));
    printf("Consumo de bytes de pnt_y: %d\n", sizeof(pnt_y));
    printf("Consumo de bytes de pnt_z: %d\n", sizeof(pnt_z));
    printf("Consumo de bytes de pnt_w: %d\n", sizeof(pnt_w));
    printf("Consumo de bytes de pnt_k: %d\n", sizeof(pnt_k));
    printf("Consumo de bytes de pnt_n: %d\n", sizeof(pnt_n));

    system("pause");
    return 0;
}

//2) Qual o tamanho de uma struct que não possua nenhuma variável definida em seu conteúdo?
//Resposta: 1 byte
//3) Qual comando e parâmetros devo utilizar para apresentar a posição do último caractere de uma string?
//Resposta: strlen(stringEmQuestao) - 1;
//4) Se uma string de 8 elementos possui seu endereço de memoria 0090FEF0, quais serão os endereços de memória do 1o. e  5o. caractere?
//Resposta: 0090FEF0 e 0090FEF4