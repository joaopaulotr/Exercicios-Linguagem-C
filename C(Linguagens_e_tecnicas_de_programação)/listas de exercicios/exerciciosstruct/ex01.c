#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct carro {
    char marca[50], modelo[50], cor[20], combustivel[15], placa[10];
    int anoModelo, anoFabricacao;
};

void removeLinha(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

int main() {
    struct carro carros[5];
    char placaBusca[10];
    int i, encontrado = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite a marca do carro %d:\n", i + 1);
        fgets(carros[i].marca, sizeof(carros[i].marca), stdin);
        removeLinha(carros[i].marca);

        printf("Digite o modelo do carro %d:\n", i + 1);
        fgets(carros[i].modelo, sizeof(carros[i].modelo), stdin);
        removeLinha(carros[i].modelo);

        printf("Digite a cor do carro %d:\n", i + 1);
        fgets(carros[i].cor, sizeof(carros[i].cor), stdin);
        removeLinha(carros[i].cor);

        printf("Digite o ano do modelo do carro %d:\n", i + 1);
        scanf("%d", &carros[i].anoModelo);

        printf("Digite o ano de fabricação do carro %d:\n", i + 1);
        scanf("%d", &carros[i].anoFabricacao);

        getchar(); 

        printf("Digite o tipo de combustível do carro %d (gasolina, etanol, flex, eletrico ou hibrido):\n", i + 1);
        fgets(carros[i].combustivel, sizeof(carros[i].combustivel), stdin);
        removeLinha(carros[i].combustivel);

        printf("Digite a placa do carro %d:\n", i + 1);
        fgets(carros[i].placa, sizeof(carros[i].placa), stdin);
        removeLinha(carros[i].placa);

        printf("Pronto, veículo %d cadastrado!\n\n", i + 1);
    }

    //========================================================================================================================

    printf("Digite uma placa para buscar o veículo:\n");
    fgets(placaBusca, sizeof(placaBusca), stdin);
    removeLinha(placaBusca);

    for (i = 0; i < 5; i++) {
        if (strcmp(carros[i].placa, placaBusca) == 0) {
            printf("\nVeículo encontrado!\n");
            printf("Marca: %s\n", carros[i].marca);
            printf("Modelo: %s\n", carros[i].modelo);
            printf("Cor: %s\n", carros[i].cor);
            printf("Ano Modelo: %d\n", carros[i].anoModelo);
            printf("Ano de Fabricação: %d\n", carros[i].anoFabricacao);
            printf("Combustível: %s\n", carros[i].combustivel);
            printf("Placa: %s\n", carros[i].placa);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Veículo não localizado.\n");
    }

    return 0;
}
