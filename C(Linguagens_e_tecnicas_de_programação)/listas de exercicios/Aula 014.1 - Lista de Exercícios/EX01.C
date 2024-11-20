#include <stdio.h>


int main(){
    int matriz[3][3] = {1,2,3,4,5,6,7,8,9};
    int i,a;

    for(i = 0 ; i < 3; i++){ //linha
        for(a = 0 ; a<3; a++){ //coluna
            printf("%d",matriz[i][a]);
        }
        printf("\n");
    }



    return 0;
}