//esquema de compra, em vetores diferentes fazer um receip, ficar perguntando bastante
#include <stdio.h>
#include <string.h>


 int preco[10];
    int quantidade[10];
    char c = 'S';
    char nomep[10][100];
    int itens = 0;
    int i = 0;


void recibo(){

int i=0;

    for (int i = 0; i < itens; i++)
    {
        printf("=============RECIBO==============");
        printf("%d unidade(s) de %s, à R$%d,00 reais", quantidade[i], nomep[i], preco[i]);
        printf("=================================");
    }
}

int main(){


   
    do
    {

        printf("Digite o nome do produto");
        scanf("%s", nomep[i]);
        printf("Digite o preco do produto");
        scanf("%d", &preco[i]);
        printf("Digite a quantidade de produtos adquirida");
        scanf("%d", &quantidade[i]);
        preco[i] = preco * quantidade;
        itens++;
        i++;
        printf("Deseja continuar? (S/N)");
        scanf("%c", &c);
        c = toupper(c);

    } while (c == 'N');
    
        recibo();


    return 0;
}