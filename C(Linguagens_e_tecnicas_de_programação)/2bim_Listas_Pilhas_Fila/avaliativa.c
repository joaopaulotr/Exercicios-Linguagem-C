#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

// Estruturas
typedef struct {
    char nome[50];   // Nome do Jogador Ex: Moreno
    int idade;       // Idade do jogador Ex: 41
    char classe[20]; // Classe do Jogador Ex: "Guerreiro", "Mago", etc.
} personagem;

typedef struct {
    int nivel;       // Nível do jogador no jogo Ex: 12
    int experiencia; // Pontuação de experiência Ex: 890
    personagem p;    // Dados do personagem
} jogador;

typedef struct apelido {
    jogador jog;             // jog é uma variável do tipo jogador
    struct apelido *proximo; //*proximo é um ponteiro do nó
} no;

no *topo = NULL; // topo é ponteiro que indica o TOPO da pilha

void push(jogador j);    // procedimento Empilhar
void pop();              // procedimento Desempilhar
void mostra_pilha();     // procedimento Imprimir pilha
void liberar_pilha();    // procedimento Limpar memória
jogador entrada_dados(); // função Entrada de dados que retorna dados do jogador

//-------------------------------------------
int main() {
    setlocale(LC_ALL, ""); // ativa teclado padrão do windows
    int opcao;             // opção para o MENU
    jogador dados;         // dados é uma variável do tipo jogador
    do {
        system("cls");
        printf("\nMenu - Pilha de Jogadores");
        printf("\n1. Empilhar Jogador");
        printf("\n2. Desempilhar Jogador");
        printf("\n3. Apresenta Pilha");
        printf("\n4. Limpar Memória");
        printf("\n5. Sair");
        printf("\nOpcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            dados = entrada_dados(); // variável dados recebe informações do jogador
            push(dados);             // empilha dados do jogador
            break;
        case 2:
            pop(); // desempilha o jogador do topo
            break;
        case 3:
            mostra_pilha(); // apresenta a pilha toda
            break;
        case 4:
            liberar_pilha();
            break;
        default:
            printf("Opção inválida\n");
        }
        system("pause");
    } while (opcao != 5);
    liberar_pilha(); // limpeza final
    printf("\nFim do programa.\n");
    system("pause");
    return 0;
}

//-------------------------------------------
// Empilha um jogador
void push(jogador j) {
    no *novo = malloc(sizeof(no));
    if (novo) {
        novo->jog = j;
        novo->proximo = topo;
        topo = novo;
        printf("\nJogador %s empilhado com sucesso!\n", j.p.nome);
    } else {
        printf("Não há memória disponível.\n");
    }
}

//-------------------------------------------
// Desempilha um jogador
void pop() {
    if (topo == NULL) {
        printf("A pilha está vazia\n");
    } else {
        no *temp = topo;
        printf("\nJogador %s desempilhado com sucesso!\n", temp->jog.p.nome);
        topo = topo->proximo;
        free(temp);
    }
}

//-------------------------------------------
void mostra_pilha() {
    if (topo == NULL) {
        printf("A pilha está vazia\n");
        return;
    }

    no *temp = topo;
    printf("\nJogadores na pilha:\n");
    while (temp != NULL) {
        printf("===============================\n");
        printf("Nome: %s\n", temp->jog.p.nome);
        printf("Idade: %d\n", temp->jog.p.idade);
        printf("Classe: %s\n", temp->jog.p.classe);
        printf("Nível: %d\n", temp->jog.nivel);
        printf("XP: %d\n", temp->jog.experiencia);
        printf("===============================\n");
        temp = temp->proximo;
    }
}

//-------------------------------------------
void liberar_pilha() {
    while (topo != NULL) {
        pop();
    }
    printf("\nMemória liberada com sucesso.\n");
}

//-------------------------------------------
jogador entrada_dados() {
    jogador jog;
    printf("\nCadastro do Jogador:\n");
    printf("Nome: ");
    scanf("%s", jog.p.nome);
    printf("Idade: ");
    scanf("%d", &jog.p.idade);
    printf("Classe: ");
    scanf("%s", jog.p.classe);
    printf("Nível: ");
    scanf("%d", &jog.nivel);
    printf("XP: ");
    scanf("%d", &jog.experiencia);

    return jog;
}