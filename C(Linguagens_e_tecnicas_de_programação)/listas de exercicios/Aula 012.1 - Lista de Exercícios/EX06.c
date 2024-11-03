#include <stdio.h>
#include <string.h>

int main(){
    char primeiro[20] = "Raiam";
    char segundo[20] = "Santos";

    strncat(primeiro, segundo, 3);
    printf("%s", primeiro);


    return 0;
}