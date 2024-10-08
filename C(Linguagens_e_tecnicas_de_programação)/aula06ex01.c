#include <stdio.h>
#include <math.h>
 


double soma (double n1, double n2); //números reais
double sub (double n1, double n2);
double mult (double n1, double n2);
double div (double n1, double n2);
double media (double n1, double n2);
double porcentagem (double n1, double n2);
double eq2g(double a, double b, double c);


    int main(){
        double valor1, valor2, valor3; 
        char op;

        printf("\tEscolha a operação:\n+ adicao\n- subtracao\n* multiplicacao\n/ divisao\nM media \nP porcentagem\nS eq 2 grau");
            scanf("%c", &op); //armazena a operação na variavel op
    if(op == 'S'){
        printf("Digite o primeiro numero: ");
            scanf("%lf", &valor1); //lf é equivalente a double e essa linha armazena o valor1
        printf("Digite o segundo numero: ");
            scanf("%lf", &valor2); //essa linha armazena o valor2
        printf("Digite o terceiro numero: ");
            scanf("%lf", &valor3); }
//printf("Operacaco escolhida: %c\n", op);        
        
    else {
        printf("Digite o primeiro numero: ");
            scanf("%lf", &valor1); //lf é equivalente a double e essa linha armazena o valor1
        printf("Digite o segundo numero: ");
            scanf("%lf", &valor2); }//essa linha armazena o valor2
//printf("Operacaco escolhida: %c\n", op);
//printf("Endereco da variavel: %p\n", op);
        
        switch (op) // é como se fosse um 'escolha' 
        {
        case '+':
            printf("Sua operacao resulta em: %.2lf", soma(valor1, valor2)); //faz a soma
            break;

        case '-':
            printf("Sua operacao resulta em: %.2lf", sub(valor1, valor2)); //faz a subtracao
            break;
        
        case '*':
            printf("Sua operacao resulta em: %.2lf", mult(valor1, valor2)); //faz a multiplicacao
            break;
            
        case '/':
            printf("Sua operacao resulta em: %.2lf", div(valor1, valor2)); //faz a divisao
            break;

        case 'M':
            
            printf("Sua operacao resulta em: %.2lf",  div(soma(valor1, valor2),2)); //fiz a média 
            break;
        
        case 'P':
            
            printf("Sua operacao resulta em: %.2lf",  div(mult(valor1,valor2),100)); //fiz a média 
            break;
        
        case 'S':
            
            printf("Sua operacao resulta em: %.2lf",); //fiz a média 
            break;    
        
        default:
            printf("Operação inválida.\n");
            break;
        }


    return 0;
}

double soma (double n1, double n2){

    return n1 + n2;    
}
double sub (double n1, double n2){

    return n1 - n2;
    
}
double mult (double n1, double n2){

    return n1 * n2;
    
}
double div (double n1, double n2){
    if (n2 != 0) {
        return n1 / n2;
    } else {
        printf("Erro: Divisão por zero.\n");
        return 0;
    }
}

double media (double n1, double n2){

     return div(soma(n1, n2),2);
    
}
double porcentagem (double n1, double n2){

     return div(mult(n1,n2),100);
    
}