#include <stdio.h>

int maiorvalor (int num1, int num2){
if(num1 > num2){
    return num1;

} else {

    return num2;
}}



int main(){

int num1,num2, maior;

printf("Digite dois numeros para descobrir o maior: \n");
scanf("%d%d", &num1,&num2);
maior = maiorvalor(num1,num2);
printf("O maior numero eh: %d", maior);



    return 0;
}