#include <stdio.h>


int main(){
int i = 0, c, f;
char afirm;

printf("Você deseja converter sua temp de celcius para fahrenheit? (S|N)");
scanf(" %c", &afirm);
if (afirm = 'S')
{
 i = 1;
 } else {
    i=2;
 }


    while (i = 0)
    {
      Printf("Digite sua temp em celcius");
      scanf("%d", &c);  
      printf("Sua temperatura convertida é: %d", (c*9/5) +32);
    }

while (i = 2)
{
    Printf("Digite sua temp em farhrenheit");
    scanf("%d", &f); 
    printf("Sua temperatura convertida é: %d", (f-32) +*5/9);
}


    


    return 0;
}