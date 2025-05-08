#include <stdio.h>
#include <stdlib.h>

void push(int item);
void pop(); //Desempilhar, apenas o elemento de cima
void imprimir();
int entrada_dados();

//===========================================================================================================

typedef struct apelido_no
{
    int dado;
    struct apelido_no *proximo;
}no;

no *top = NULL;

//===========================================================================================================


void menu(){
    int sair = 0;
    int n;

    while (sair == 0)
    {
        int escolha;
        printf("=====================\n");
        printf("1. Empilhar (push)\n");
        printf("2. Desenpilhar(pop)\n");
        printf("3. Listar/imprimir\n");
        printf("4. Sair\n");
        printf("=====================\n");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
        printf("=====================\n");
        printf("Voce escolheu Empilhar.\n");
        printf("=====================\n");
        n = entrada_dados();
        push(n); //Empilhar
            break;

        case 2:
        printf("=====================\n");
        printf("Voce escolheu Desempilhar.\n");
        printf("=====================\n");
        pop(); //Desenpilhar
            break;

        case 3:
        printf("=====================\n");
        printf("Voce escolheu Imprimir:.\n");
        printf("=====================\n");
        imprimir(); //Listar
            break;
        case 4:
        printf("=====================\n");
        printf("Voce escolheu sair.\n");
        printf("=====================\n");
        sair = 1; // Sai do programa
            break;
        default:
        printf("Voce nao escolheu nenhuma opcao!\n");
            break;
        }
    }
    
}

int main(){
    menu();

    return 0;
}

//===========================================================================================================

void push(int item){
    printf("\nEMPILHANDO...\n");
    no *novo=malloc(sizeof(no));
    //verificar se há memória
    novo -> dado = item;
    novo -> proximo = top;
    top = novo;
    printf("\nValor %d empilhado\n", novo->dado);
    system("pause");

}

//===========================================================================================================

void pop(){
    printf("\nDESEMPILHANDO...\n");
    if (top == NULL){
        printf("A pilha está vazia \n");
    }else{
        no *temp;
        temp = top;
        top = top -> proximo;
        printf("\n%d Desempilhado com sucesso\n", temp->dado);
        free(temp);
    }
}

//===========================================================================================================

void imprimir(){
    
}

//===========================================================================================================

int entrada_dados(){
    int valor; 
    printf("\nEntre com o valor a empilhar: ");
    scanf("%d", &valor);
    return valor;
}

//===========================================================================================================
