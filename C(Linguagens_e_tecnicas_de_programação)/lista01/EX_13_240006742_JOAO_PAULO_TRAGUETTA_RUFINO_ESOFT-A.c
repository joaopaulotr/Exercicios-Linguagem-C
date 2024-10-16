#include <stdio.h>

int verifica(int num1){
if (num1 % 2 == 0 ){
    return 1;
}  else{
    return 0;
}
}


int main(){
    int num1;
    printf("Digite um numero:\n");
    scanf("%d", &num1);
    num1 = verifica(num1);
    printf("%d", num1);





    return 0;
}