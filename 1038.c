/*Lanche*/
#include <stdio.h>
int main(){
    int qtd;
    char codigo;
    float total;
    scanf("%s%d", &codigo, &qtd);
    switch (codigo)
    {
    case '1':
        /*Cachorro Quente*/
        total = qtd*4.00;
        printf("Total: R$ %.2f\n", total);
        break;
    
    case '2':
        /*X-salada*/
        total = qtd*4.50;
        printf("Total: R$ %.2f\n", total);
        break;

    case '3':
        /*X-Bacon*/
        total = qtd*5.00;
        printf("Total: R$ %.2f\n", total);
        break;
    
    case '4':
        /*Torrada Simples*/
        total = qtd*2.00;
        printf("Total: R$ %.2f\n", total);
        break;

    case '5':
        /*Refrigerante*/
        total = qtd*1.50;
        printf("Total: R$ %.2f\n", total);
        break;
    }
    return 0;
}
