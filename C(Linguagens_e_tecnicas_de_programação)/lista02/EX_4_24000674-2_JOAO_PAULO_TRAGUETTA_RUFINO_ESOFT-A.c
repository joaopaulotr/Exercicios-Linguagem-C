#include <stdio.h>
#include <math.h>

int main(){
    int qua;
    double raiz;

    printf ("Digite um numero:");
    scanf("%d", &qua);

   raiz = sqrt(qua);

   if(raiz == (int)raiz){
   printf("Esse numero e quadrado perfeito");}
   else{
      printf("esse numero nao eh quadrado perfeito");
   }




    return 0;
}