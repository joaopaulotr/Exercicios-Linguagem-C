#include <stdio.h>
#include <math.h>
//Umprogramadecálculodejuroscompostosdevecalcularo
//montanteacumuladodeuminvestimentoaolongodotempo,combasena
//taxadejurosenonúmerodeperíodos.

int main(){
    double tempo, capital, taxa, total;
    printf("digite o capital aplica, o tempo e taxa de juro:");
    scanf("%lf %lf %lf", &capital, &tempo, &tempo);

    total = capital * pow((1+taxa/100), tempo);

    printf("O montante eh: %.2lf", total);



    return 0;
}