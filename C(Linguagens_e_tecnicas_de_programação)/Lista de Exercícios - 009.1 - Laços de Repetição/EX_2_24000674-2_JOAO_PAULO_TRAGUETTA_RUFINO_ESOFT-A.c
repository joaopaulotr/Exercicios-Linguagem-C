#include <stdio.h>


int main (){
    int i = 1, a=0;

    while (i<=100)
    {
        a = a + i;
        i++;
    }
    printf("%d", a);  



    return 0;
}