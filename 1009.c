#include <stdio.h>
 
int main() {
    double salario, vendas, total;
    char nome[200];

    scanf("%[^\n]%lf%lf", nome, &salario, &vendas);

    vendas *= 0.15;
    total = salario + vendas;

    printf("TOTAL = R$ %.2lf\n", total);
 
    return 0;
}
