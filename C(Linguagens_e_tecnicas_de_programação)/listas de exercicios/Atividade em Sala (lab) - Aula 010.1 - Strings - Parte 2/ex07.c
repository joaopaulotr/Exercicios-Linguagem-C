#include <stdio.h>
#include <string.h>

int main(){
    char f1[100] = "aloalo";
        char f2[100] = "olaola";


        if(strcmp(f1,f2) == 0){
            printf("Palindromo");
        }else{
            printf("Nao palindromo");
        }


    return 0;
}