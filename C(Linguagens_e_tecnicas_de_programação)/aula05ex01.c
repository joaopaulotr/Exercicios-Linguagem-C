/* 
   Arquivo: Aula05ex01.C
   Arquivo único.
   Aula 20/08/2024
   Autor: João Paulo Traguetta Rufino
  
*/
#include <stdio.h>

//criando uma função para usar posteriormente, algo que eu tenha que usar varias vezes
void divisor(int num, int div){ //void pq nao precisa retornar nada
   if(num % div == 0){ //se o numero é divisil pelo outro
    printf("Eh divisivel");
   } else {
    printf("Nao eh divisivel");
   }

}


int main(){
    int n1,n2;
    printf("Digite dois valores para descobrir se sao divisiveis um pelo outro:\n");
    scanf("%d%2d",&n1,&n2);

    divisor (n1,n2);


    return 0;
}