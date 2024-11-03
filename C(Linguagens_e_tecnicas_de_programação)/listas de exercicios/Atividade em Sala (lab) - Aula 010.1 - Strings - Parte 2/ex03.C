#include <stdio.h> 
#include <string.h>

    int main () {
        
        char alo [30] = "jota";
        char aloalo [30] = "pe";

            if (strncmp (alo,aloalo,3) < 0) {
                printf ("o primeiro prefixo eh maior.");
            } else if (strncmp (pal1,pal2,3) > 0) {
                printf ("o segundo prefixo eh maior.");
            } else ("os prefixos são iguais.");

    return 0;
    }