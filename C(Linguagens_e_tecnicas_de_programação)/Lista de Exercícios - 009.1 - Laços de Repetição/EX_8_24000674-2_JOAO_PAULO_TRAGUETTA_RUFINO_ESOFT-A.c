#include <stdio.h>


int main(){
    int num, primo = 1,i;

    printf("Digite um num: ");
    scanf("%d", &num);

    if (num <= 1) {
    primo = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                primo = 0;
        }
        }
    }

    if (primo == 1){
        printf("eh primo");
    } else {
        printf("nao eh primo");
    }




    return 0;
}