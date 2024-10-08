#include <stdio.h>

void ordenaDecrescente(int *n1, int *n2, int *n3, int *n4, int *n5) {
    int temp;
    
    if (*n1 < *n2) { temp = *n1; *n1 = *n2; *n2 = temp; }
    if (*n1 < *n3) { temp = *n1; *n1 = *n3; *n3 = temp; }
    if (*n1 < *n4) { temp = *n1; *n1 = *n4; *n4 = temp; }
    if (*n1 < *n5) { temp = *n1; *n1 = *n5; *n5 = temp; }
    
    if (*n2 < *n3) { temp = *n2; *n2 = *n3; *n3 = temp; }
    if (*n2 < *n4) { temp = *n2; *n2 = *n4; *n4 = temp; }
    if (*n2 < *n5) { temp = *n2; *n2 = *n5; *n5 = temp; }
    
    if (*n3 < *n4) { temp = *n3; *n3 = *n4; *n4 = temp; }
    if (*n3 < *n5) { temp = *n3; *n3 = *n5; *n5 = temp; }
    
    if (*n4 < *n5) { temp = *n4; *n4 = *n5; *n5 = temp; }
}

int main() {
    int n1, n2, n3, n4, n5;

    printf("Digite o primeiro, segundo, terceiro, quarto e quinto número: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    ordenaDecrescente(&n1, &n2, &n3, &n4, &n5);

    printf("Os valores em ordem decrescente são: %d %d %d %d %d\n", n1, n2, n3, n4, n5);

    return 0;
}
