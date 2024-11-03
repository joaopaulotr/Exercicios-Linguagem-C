#include <stdio.h>
#include <string.h>

int main(){
    char f1[20] = "aaaaaa";
        char f3[20];

    int i;

    for(i = 0; i < 6; i++){
        if (strncpy(f3, f1, i) == 'a' || strncpy(f3, f1, i) == 'e' ||strncpy(f3, f1, i) == 'i' || strncpy(f3, f1, i) == 'o' || strncpy(f3, f1, i) == 'u'){
        } else{
            strncpy(f3, f1, i);
        
        }
    printf("%s", f3);
    
    return 0;
}}