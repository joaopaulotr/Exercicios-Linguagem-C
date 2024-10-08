#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>

int main(){
    int num, adivinha;
    printf ("Digite um número de 1 a 100");
    scanf("%d", &num);

    adivinha <- (rand() % 100 + 1);

    if(adivinha == num){
        printf("ACERTOU");
    }


    if (num >= 1 && num <=100){
        while (adivinha != num){ 
        printf ("Errou, digite um número de 1 a 100\n");
        scanf("%d", &num); 
        if(adivinha == num){
        printf("ACERTOU\n");
    }   
        if (adivinha > num){
            printf("maior\n");
        } else {
            printf("menor\n");
        }



    }
    }

    

    return 0;   
}