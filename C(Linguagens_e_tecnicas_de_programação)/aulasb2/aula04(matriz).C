#include <stdio.h>

int main(){
    int i,j,x,y;
    int idades[3][3];

    for (int i = 0; i < 3; i++){ //linha
        for(j = 0; j<3;j++){  //coluna
            printf("Informe uma idade [%d][%d]", i+1, j+1);
            scanf("%d", &idades [i][j]);
        }
    }
    
    for(int x =0; x<3; x++){ //linha
        for(int y = 0; y<3;y++){ //coluna
            printf("%d", &idades[x][y]);
        }
        printf("\n");
    }

//==========================================================================================

    char nomes[5][100];

    for(int i=0; i<5; i++){
        printf("Informe um nome\n");
        gets(nomes[i]);
    }

    for(int i=0; i<5; i++){
        printf("%S\n",nomes[i]);
    }

    }