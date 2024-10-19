#include <stdio.h>


int main(){
int media=0, num=0, i=1;

    do
    {
        printf("Digite um num\n");
        scanf("%d", &num);

        media+=num;
      
        i++;
    } while (i<=5);
    
    printf("Sua media eh %d", media/5);


    return 0;
}