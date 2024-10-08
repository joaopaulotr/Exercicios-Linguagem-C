#include <stdio.h>

int contaBissextos(int ano) {
    int bissextos = (ano / 4) - (1900 / 4);
    bissextos -= (ano / 100) - (1900 / 100);
    bissextos += (ano / 400) - (1900 / 400);
    return bissextos;
}

int diasNoMes(int mes, int ano) {
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        return 31;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return 30;
    } else if (mes == 2) {
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            return 29; 
        } else {
            return 28; 
        }
    }
    return 0;
}

int main() {
    int d, m, ano, total = 0;

    printf("Digite o seu dia, mes e ano de nascimento (maior ou igual a 1900, ou seja, nascido depois de 1900):\n");
    scanf("%d%d%d", &d, &m, &ano);

    if (ano < 1900 || ano > 9999) {
        printf("Erro, as datas digitadas são inválidas.\n");
        return 1;
    } else {
        printf("Datas válidas, fazendo o cálculo...\n");
    }

    int bissextos = contaBissextos(ano);
    int anosPassados = ano - 1900;

    total = anosPassados * 365 + bissextos;

    for (int i = 1; i < m; i++) {
        total += diasNoMes(i, ano);
    }

    total += d - 1;

    printf("A quantidade de dias entre o dia de seu nascimento e 1900 é: %d\n", total);

    return 0;
}
