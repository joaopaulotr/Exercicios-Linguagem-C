#include <stdio.h> 
int main () {
    int soma, num;
    FILE *arquivo;
    arquivo = fopen ("file.txt", "r");

    while (fscanf(arquivo, "%d", &num) != EOF) {
         soma += num;
    }       
      fclose(arquivo);

          printf ("A soma dos valores do arquivo é: %d", soma);

    return 0;
}