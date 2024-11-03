#include <stdio.h>
//Umprogramadeveverificarseumanoébissextoounão.Anos
//bissextossãodivisíveispor4,masnãopor100,amenosquesejamdivisíveis
//por400.



int main(){

    int ano;

    printf("Digite o seu ano:");
    scanf("%d", &ano);

    if((ano % 4 == 0) && (ano % 100 != 0) || (ano % 400 == 0)){
        printf("bissexto");
    }else{
        printf("nao bissexto");
    }

    return 0;
}