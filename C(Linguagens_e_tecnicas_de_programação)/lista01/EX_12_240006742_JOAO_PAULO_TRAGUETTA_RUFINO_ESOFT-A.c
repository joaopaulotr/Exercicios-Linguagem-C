#include <stdio.h>

int absoluto (int num1){
if (num1 < 0 ){
    num1 = num1 * -1;
    return num1;
} }


int main (){
    int num1;
    printf("Digite um numero e descubra sua versao absoluta:\n");
    scanf("%d", &num1);
    num1 = absoluto(num1);
    printf("Seu numero aboluto eh: %d", num1);





    return 0;
}