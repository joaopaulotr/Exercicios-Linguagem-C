#include <stdio.h> 
int main () {
    int numero, soma;
    FILE *arquivo;
    arquivo = fopen ("file.txt", "w");

    if (arquivo == NULL) {
        printf("ERRO\n");
        return 1;
    } 

    for (int i = 1; i <= 10; i++) {
            fprintf(arquivo, "%d\n", i);
    }
    fclose (arquivo);

    arquivo = fopen ("file.txt", "r");

    while (fscanf(arquivo, "%d", &numero) != EOF) {
        soma += numero*3;
    }
    fclose(arquivo);

        printf ("O valor da soma dos numeros pos 3 é igual a %d", soma);
    return 0;
}