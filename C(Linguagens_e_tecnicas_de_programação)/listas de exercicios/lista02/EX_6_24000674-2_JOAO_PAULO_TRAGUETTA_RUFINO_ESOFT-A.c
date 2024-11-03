#include <stdio.h>


int main(){
int desconto, qnt;
char conf;
float preco, total;

    while (conf = 'S')
    {
    printf("Digite quantas unidades do seu produto");
    scanf("%d", &qnt);
    printf("Digite o preco unitario de cada um:");
    scanf("%f", &preco);
    printf("Você teve algum desconto?");
    scanf("%d", &desconto);
    total = qnt * preco;
    total = total - total * desconto/100;
    printf("Deseja continuar adicionando mais produtos? (S/N)");
    scanf("%c",conf);
    printf(total);

    }
    
    return 0;
}