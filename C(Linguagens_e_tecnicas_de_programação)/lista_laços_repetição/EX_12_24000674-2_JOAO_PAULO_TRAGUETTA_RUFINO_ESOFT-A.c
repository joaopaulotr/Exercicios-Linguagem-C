#include <stdio.h>


int main (){

    int idade =0,i=0, qf=0, qnth=0, qntm=0, mj=0, mulhersemfilho=0;
    char sexo;

printf("Digite sua idade: ");
    scanf ("%d", &idade);

        mj = idade;

        printf("Digite seu sexo (F | M):");
            scanf ("%c", &sexo);
                if (sexo == 'M')
                {
                    qnth++;
                } else{
                    qntm++;
                }
            
                printf("Digite a quantidade de filhos:");
                scanf ("%d", &qf);
                    if (sexo == 'F' && qf == '0')
                    {
                        mulhersemfilho++;
                    }          
    
    
    
for(i = 0; i<= 11; i++){

    printf("Digite sua idade: ");
    scanf ("%d", &idade);
        if (idade < mj)
        {
            mj = idade;
        }
        
        printf("Digite seu sexo (F | M):");
            scanf ("%c", &sexo);
                if (sexo == 'M')
                {
                    qnth++;
                } else{
                    qntm++;
                }
            
                printf("Digite a quantidade de filhos:");
                scanf ("%d", &qf);
                    if (sexo == 'F' && qf == '0')
                    {
                        mulhersemfilho++;
                    }          
    }


        printf("O percentual de homens eh: " (qnth*100)/12);
        printf("A media de idade das mulheres sem filhos eh: ", mulhersemfilho*100/qntm);
        printf("A pessoa mais jovem tem %d anos", mj);
        pritnf("Foram entrevistadas %d mulheres", qntm);


//--------------------------------------------------------------------------------------------------------------------------------

idade =0;
i=0;
qf=0; 
qnth=0; 
qntm=0; 
mj=idade;
mulhersemfilho=0;

printf("Digite sua idade: ");
    scanf ("%d", &idade);

        mj = idade;

        printf("Digite seu sexo (F | M):");
            scanf ("%c", &sexo);
                if (sexo == 'M')
                {
                    qnth++;
                } else{
                    qntm++;
                }
            
                printf("Digite a quantidade de filhos:");
                scanf ("%d", &qf);
                    if (sexo == 'F' && qf == '0')
                    {
                        mulhersemfilho++;
                    }          

while (i <= 11)
{

    printf("Digite sua idade: ");
    scanf ("%d", &idade);
        if (idade < mj)
        {
            mj = idade;
        }
        
        printf("Digite seu sexo (F | M):");
            scanf ("%c", &sexo);
                if (sexo == 'M')
                {
                    qnth++;
                } else{
                    qntm++;
                }
            
                printf("Digite a quantidade de filhos:");
                scanf ("%d", &qf);
                    if (sexo == 'F' && qf == '0')
                    {
                        mulhersemfilho++;
                    }          
                    i++;
    
}
//--------------------------------------------------------------------------------------------

idade =0;
i=0;
qf=0; 
qnth=0; 
qntm=0; 
mj=idade;
mulhersemfilho=0;

printf("Digite sua idade: ");
    scanf ("%d", &idade);

        mj = idade;

        printf("Digite seu sexo (F | M):");
            scanf ("%c", &sexo);
                if (sexo == 'M')
                {
                    qnth++;
                } else{
                    qntm++;
                }
            
                printf("Digite a quantidade de filhos:");
                scanf ("%d", &qf);
                    if (sexo == 'F' && qf == '0')
                    {
                        mulhersemfilho++;
                    }          

do
{
    printf("Digite sua idade: ");
    scanf ("%d", &idade);
        if (idade < mj)
        {
            mj = idade;
        }
        
        printf("Digite seu sexo (F | M):");
            scanf ("%c", &sexo);
                if (sexo == 'M')
                {
                    qnth++;
                } else{
                    qntm++;
                }
            
                printf("Digite a quantidade de filhos:");
                scanf ("%d", &qf);
                    if (sexo == 'F' && qf == '0')
                    {
                        mulhersemfilho++;
                    }          
                    i++;
} while (i <=4);





    return 0;
}