
int receber (int valor){ //valor 3721
    int soma = 0;
    soma += valor/1000; /
    valor = valor % 1000; 
    soma += valor / 100;
    valor = valor % 100;
    soma += valor / 10;
    soma += valor % 10;

return soma;
}