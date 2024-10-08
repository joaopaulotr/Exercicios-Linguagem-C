#include <stdio.h>
//:Umaagênciadeviagensoferecepacotesdeviagemcomdescontos
//paragruposgrandes.Escrevaumprogramaquecalculeocustototaldeum
//pacotedeviagem,considerandoonúmerodepessoaseasopçõesescolhidas.


int main(){
    int pessoas, escolha, total;


    printf("Escolha um pacote de viagens.\n PACOTE 1: BAHAMAS POR 5000 REAIS POR PESSOAS \n PACOTE 2: RIO DE JANEIRO POR 2000 REAIS POR PESSOA");
    scanf("%d", &escolha);
    printf("Agora digite o numero de pessoas que irao:");
    scanf("%d", &pessoas);

    switch (escolha)
    {
    case 1:
       total = 5000 * pessoas;
       printf("%d", total)
        break;
        case 2:
        total = 2000 * pessoas;
        printf("%d", total)
        break;
    
    default:
        break;
    }







    return 0;
}