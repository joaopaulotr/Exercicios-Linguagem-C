#include <stdio.h>
#include <string.h>

int main(){
    char livrot[20] = "Raiam";
    char primeiros[5];


    strncpy(primeiros, livrot, 5);
    printf("%s",primeiros);


    return 0;
}