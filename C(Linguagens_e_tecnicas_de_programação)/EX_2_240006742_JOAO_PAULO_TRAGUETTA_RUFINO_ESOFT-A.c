#include <stdio.h>


int main () {
    float numdec;
    int numint;
    printf("Digite um número");
    scanf("%f", &numdec);
    numint = numdec;
    numdec = numdec - numint;

    printf("a parte decimal e %f e a parte %d", numdec,numint);



    





    return 0;
}