#include <stdio.h>


int main(){

int idade =0, mv =0, mj =0, i;

    printf("digite sua idade: ");
    scanf("%d", &idade);

    mv = idade;
    mj = idade;

    for(i = 1; i<=4 ; i++){
        printf("digite sua idade: ");
        scanf("%d", &idade);

        if (idade > mv){
            mv = idade;
        }
         if (idade < mj){
            mj = idade;
        }
    }

    printf("A pessoa mais nova eh: %d\n", mj);
    printf("A pessoa mais idosa eh: %d\n", mv);


//----------------------------------------------------

idade = 0;
mv = idade;
mj = idade;
i = 0;

printf("digite sua idade: ");
    scanf("%d", &idade);

    mv = idade;
    mj = idade;

while (i <= 4)
{
     printf("digite sua idade: ");
        scanf("%d", &idade);

        if (idade > mv){
            mv = idade;
        }
         if (idade < mj){
            mj = idade;
        }
    i++;
}

printf("A pessoa mais nova eh: %d\n", mj);
    printf("A pessoa mais idosa eh: %d\n", mv);

//------------------------------------------------------------------------------------------



idade = 0;
mv = idade;
mj = idade;
i = 0;

printf("digite sua idade: ");
    scanf("%d", &idade);

    mv = idade;
    mj = idade;

do
{
     printf("digite sua idade: ");
        scanf("%d", &idade);

        if (idade > mv){
            mv = idade;
        }
         if (idade < mj){
            mj = idade;
        }
    i++;
} while (i <= 4);



printf("A pessoa mais nova eh: %d\n", mj);
    printf("A pessoa mais idosa eh: %d\n", mv);

    return 0;
}