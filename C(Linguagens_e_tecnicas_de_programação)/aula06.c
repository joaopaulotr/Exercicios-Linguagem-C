#include <stdio.h>


double soma (double n1, double n2); //números reais
double sub (double n1, double n2);
double mult (double n1, double n2);
double div (double n1, double n2);

    int main(){
        printf("Sua soma eh:  %.2f\n", soma(8,3)); //%.2f é para ver as apenas duas casa decimais
        printf("Sua subtracao eh: %.2f\n", sub(8,3));
        printf("Sua multiplicacao eh: %.2f\n", mult(8,3));
        printf("Sua divisao eh: %.2f\n", div(8,3));

    return 0;
}

double soma (double n1, double n2){

    return n1 + n2;    
}
double sub (double n1, double n2){

    return n1 - n2;
    
}
double mult (double n1, double n2){

    return n1 * n2;
    
}
double div (double n1, double n2){

    return n1 / n2;
    
}