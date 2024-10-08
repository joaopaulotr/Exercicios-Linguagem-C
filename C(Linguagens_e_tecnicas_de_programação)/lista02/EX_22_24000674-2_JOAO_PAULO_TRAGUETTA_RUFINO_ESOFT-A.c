#include <stdio.h>
//Escrevaumprogramaqueconvertaumatemperaturaemgraus
//CelsiusparaFahrenheitouvice-versa,dependendodaescolhadousuário.
int main(){
    int temp1, temp2;
    char opcao;

    printf("Digite digite 1 para celcius to frahrenheit e 2 de fahrenheit to celcius");
    scanf("% c", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Digite sua temp em celcius");
        scanf("%d", &temp1);
        temp2 = (temp1 * 1.8) + 32;
        printf("%d", temp2);
        break;
    case 2:
    printf("Digite sua temp em fahrenheit");
        scanf("%d", &temp1);
        temp2 = (temp1 -32) / 1.8;
        printf("%d", temp2);
        break;
    default:
    printf("invalido");
        break;
    }



    return 0;
}