#include <stdio.h>

int main() {
    int mes, dia, i;
    char confirm;

    printf("Digite seu dia de nascimento: ");
    scanf("%d", &dia);
    printf("Digite seu mês de nascimento (ex, jan (1)): ");
    scanf("%d", &mes);
i = 1;

    while (i = 1)
    {
        
      if ((dia >= 21 && dia <= 31 && mes == 1) || (dia >= 1 && dia <= 19 && mes == 2)) {
        printf("Aquario\n");
    }
    //-----------------------------------------------------------------------------
    else if ((dia >= 20 && dia <= 29 && mes == 2) || (dia >= 1 && dia <= 20 && mes == 3)) {
        printf("Peixes\n");
    }
    //-----------------------------------------------------------------------------
    else if ((dia >= 21 && dia <= 31 && mes == 3) || (dia >= 1 && dia <= 20 && mes == 4)) {
        printf("aries\n");
    }
    //-----------------------------------------------------------------------------
    else if ((dia >= 21 && dia <= 30 && mes == 4) || (dia >= 1 && dia <= 20 && mes == 5)) {
        printf("Touro\n");
    }
    //-----------------------------------------------------------------------------
    else if ((dia >= 21 && dia <= 31 && mes == 5) || (dia >= 1 && dia <= 20 && mes == 6)) {
        printf("Gemeos\n");
    }
    //-----------------------------------------------------------------------------
    else if ((dia >= 21 && dia <= 30 && mes == 6) || (dia >= 1 && dia <= 22 && mes == 7)) {
        printf("Cancer\n");
    }
    //-----------------------------------------------------------------------------
    else if ((dia >= 23 && dia <= 31 && mes == 7) || (dia >= 1 && dia <= 22 && mes == 8)) {
        printf("Leao\n");
    }
    //-----------------------------------------------------------------------------
    else if ((dia >= 23 && dia <= 31 && mes == 8) || (dia >= 1 && dia <= 22 && mes == 9)) {
        printf("Virgem\n");
    }
    //-----------------------------------------------------------------------------
    else if ((dia >= 23 && dia <= 30 && mes == 9) || (dia >= 1 && dia <= 22 && mes == 10)) {
        printf("Libra\n");
    }
    //-----------------------------------------------------------------------------
    else if ((dia >= 23 && dia <= 31 && mes == 10) || (dia >= 1 && dia <= 21 && mes == 11)) {
        printf("Escorpiao\n");
    }
    //-----------------------------------------------------------------------------
    else if ((dia >= 22 && dia <= 30 && mes == 11) || (dia >= 1 && dia <= 21 && mes == 12)) {
        printf("Sagitario\n");
    }
    //-----------------------------------------------------------------------------
    else if ((dia >= 22 && dia <= 31 && mes == 12) || (dia >= 1 && dia <= 20 && mes == 1)) {
        printf("Capricornio\n");
    }
    //-----------------------------------------------------------------------------
    else {
        printf("data invalida.\n");
    }

    printf("Deseja continuar? (S|N)");
    scanf("%c", &confirm);
     if(confirm = 'N'){
        i= 0;

     }

  
    }

i = 1;

    do
    {

      if ((dia >= 21 && dia <= 31 && mes == 1) || (dia >= 1 && dia <= 19 && mes == 2)) {
        printf("Aquario\n");
    }
    //-----------------------------------------------------------------------------
    else if ((dia >= 20 && dia <= 29 && mes == 2) || (dia >= 1 && dia <= 20 && mes == 3)) {
        printf("Peixes\n");
    }
    //-----------------------------------------------------------------------------
    else if ((dia >= 21 && dia <= 31 && mes == 3) || (dia >= 1 && dia <= 20 && mes == 4)) {
        printf("aries\n");
    }
    //-----------------------------------------------------------------------------
    else if ((dia >= 21 && dia <= 30 && mes == 4) || (dia >= 1 && dia <= 20 && mes == 5)) {
        printf("Touro\n");
    }
    //-----------------------------------------------------------------------------
    else if ((dia >= 21 && dia <= 31 && mes == 5) || (dia >= 1 && dia <= 20 && mes == 6)) {
        printf("Gemeos\n");
    }
    //-----------------------------------------------------------------------------
    else if ((dia >= 21 && dia <= 30 && mes == 6) || (dia >= 1 && dia <= 22 && mes == 7)) {
        printf("Cancer\n");
    }
    //-----------------------------------------------------------------------------
    else if ((dia >= 23 && dia <= 31 && mes == 7) || (dia >= 1 && dia <= 22 && mes == 8)) {
        printf("Leao\n");
    }
    //-----------------------------------------------------------------------------
    else if ((dia >= 23 && dia <= 31 && mes == 8) || (dia >= 1 && dia <= 22 && mes == 9)) {
        printf("Virgem\n");
    }
    //-----------------------------------------------------------------------------
    else if ((dia >= 23 && dia <= 30 && mes == 9) || (dia >= 1 && dia <= 22 && mes == 10)) {
        printf("Libra\n");
    }
    //-----------------------------------------------------------------------------
    else if ((dia >= 23 && dia <= 31 && mes == 10) || (dia >= 1 && dia <= 21 && mes == 11)) {
        printf("Escorpiao\n");
    }
    //-----------------------------------------------------------------------------
    else if ((dia >= 22 && dia <= 30 && mes == 11) || (dia >= 1 && dia <= 21 && mes == 12)) {
        printf("Sagitario\n");
    }
    //-----------------------------------------------------------------------------
    else if ((dia >= 22 && dia <= 31 && mes == 12) || (dia >= 1 && dia <= 20 && mes == 1)) {
        printf("Capricornio\n");
    }
    //-----------------------------------------------------------------------------
    else {
        printf("data invalida.\n");
    }

    printf("Deseja continuar? (S|N)");
    scanf("%c", &confirm);
     if(confirm = 'N'){
        i= 0;

     }

    } while (i == 1);
    
    
    
    return 0;
}
