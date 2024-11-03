#include <stdio.h>
#include <string.h>

int main(){
    char f1[20] = "aaaaaa";
    char f2[20] = "bbbbbb";
    char f3[40];
    int i;

    for(i = 0; i < 12; i++){
    strncpy(f3, f2, i);
        strncpy(f3, f1, i);
    }
    printf("%s", f3);

    return 0;
}