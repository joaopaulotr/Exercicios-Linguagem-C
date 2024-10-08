#include <stdio.h>

int main(){
    float n1;
    float m;

        printf("Digite um numero:");
        scanf("%f", &n1);

        m = n1;

        printf("Digite um numero:");
        scanf("%f", &n1);

            m += n1;

        printf("Digite um numero:");
        scanf("%f", &n1);

            m += n1;

        printf("Digite um numero:");
        scanf("%f", &n1);

             m += n1;

        printf("Digite um numero:");
        scanf("%f", &n1);

            m += n1;
        
            m = m/5;
        printf("A media do 5 numeros é %.2f", m);


    return 0;
}