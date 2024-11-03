#include <stdio.h>
#include <string.h>

    int main () {
        char frase [50] = "lepolepoaaaaaaa";
        char *ptr = strchr (frase, 'a');

            for (int i=0;i < strlen(frase); i++) {
                if (ptr) printf ("letra repetida.");
            }
            
        return 0;
    }