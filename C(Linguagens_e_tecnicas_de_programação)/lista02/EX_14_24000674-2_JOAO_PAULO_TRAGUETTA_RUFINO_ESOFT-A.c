#include <stdio.h>

int main() {
    char categoria, conf;
    float preco, total = 0.0f;

    do {
        printf("Digite a categoria do seu livro (A/B/C):\n");
        scanf(" %c", &categoria); 


        printf("Digite o preço do seu livro:");
        scanf("%f", &preco);

        if (categoria == 'A') {
            preco -= preco * 10 / 100;
        } else if (categoria == 'B') {
            preco -= preco * 20 / 100;
        } else if (categoria == 'C') {
            preco -= preco * 30 / 100;
        }

        total = total + preco;

        printf("Deseja adicionar mais livros? (S/N): ");
        scanf(" %c", &conf); 
    } while (conf == 'S' || conf == 's');

    printf("Total: %.2f\n", total);

    return 0;
}
