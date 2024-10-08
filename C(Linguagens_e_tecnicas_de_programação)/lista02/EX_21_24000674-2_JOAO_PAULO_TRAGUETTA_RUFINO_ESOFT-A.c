#include <stdio.h>

//Umacalculadoradeempréstimosdevecalcularovalordas
//prestaçõesmensais,levandoemconsideraçãoovalordoempréstimo,ataxa
//dejuroseonúmerodeparcelas.

int main(){
    float montante, tempo, capital, taxa;

    printf("Digite o capital:\n");
    scanf("%lf", &capital);

    printf("Digite o tempo:\n");
    scanf("%lf", &tempo);

    printf("Digite o taxa:\n");
    scanf("%lf", &taxa);


    montante = capital * tempo * taxa;

    printf("%.2lf", montante);

    return 0;
}