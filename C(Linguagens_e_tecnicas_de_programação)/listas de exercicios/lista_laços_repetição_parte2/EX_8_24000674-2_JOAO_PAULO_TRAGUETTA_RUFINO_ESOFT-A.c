#include <stdio.h>

int main(){
    int i, numi, media, ni;

    media = 0;
        ni = 0;

    for (i=0; i<=10; i++){

        printf("Digite um numero\n");
        scanf("%d", &numi);
        if (numi % 2 == 0){
            printf("Seu nuemro eh par\n");
        } else {
            printf("Seu numero eh impar\n");
            media += numi;
            ni++;
        }
    }
        printf("\n sua media eh: %d", media/ni);
        media = 0;
        ni = 0;
        i = 0;

/*

    while (i<=10)
    {
        printf("Digite um numero\n");
        scanf("%d", &numi);
        if (numi % 2 == 0){
            printf("Seu nuemro eh par\n");
        } else {
            printf("Seu numero eh impar\n");
            media += numi;
            ni++;
        }
        i++;
    }
    
    printf("\n sua media eh: %d", media/ni);
    media = 0;
    ni = 0;
    i = 0;


do
{
    printf("Digite um numero\n");
        scanf("%d", &numi);
        if (numi % 2 == 0){
            printf("Seu nuemro eh par\n");
        } else {
            printf("Seu numero eh impar\n");
            media += numi;
            ni++;
        }
        i++;

} while (i<=10);

    printf("\n sua media eh:  %d", media/ni);

*/
return 0;
}

