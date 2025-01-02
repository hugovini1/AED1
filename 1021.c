/*notas e moedas de um valor*/

#include <stdio.h>
#include <math.h>

int main(){
    double numero, qtdDecimal;
    int qtdInteira, notas, qtd, qtdM, moedas;

    scanf("%lf", &numero);

    qtdInteira = (int)numero;
    qtdDecimal = numero - qtdInteira;

    printf("NOTAS:\n");
    notas = qtdInteira/100;
    printf("%d nota(s) de R$ 100.00\n", notas);

    qtd = qtdInteira%100;
    notas = qtd/50;
    printf("%d nota(s) de R$ 50.00\n", notas);

    qtd = qtd%50;
    notas = qtd/20;
    printf("%d nota(s) de R$ 20.00\n", notas);

    qtd = qtd%20;
    notas = qtd/10;
    printf("%d nota(s) de R$ 10.00\n", notas);

    qtd = qtd%10;
    notas = qtd/5;
    printf("%d nota(s) de R$ 5.00\n", notas);

    qtd = qtd%5;
    notas = qtd/2;
    printf("%d nota(s) de R$ 2.00\n", notas);

    printf("MOEDAS:\n");

    qtd = qtd%2;
    notas = qtd/1;
    printf("%d moeda(s) de R$ 1.00\n", notas);

    qtdDecimal = qtdDecimal*100;
    qtdInteira = (int)qtdDecimal;

    qtdM = qtdInteira%100;
    moedas = qtdM/50;
    printf("%d moeda(s) de R$ 0.50\n", moedas);

    qtdM = qtdM%50;
    moedas = qtdM/25;
    printf("%d moeda(s) de R$ 0.25\n", moedas);

    qtdM = qtdM%25;
    moedas = qtdM/10;
    printf("%d moeda(s) de R$ 0.10\n", moedas);

    qtdM = qtdM%10;
    moedas = qtdM/5;
    printf("%d moeda(s) de R$ 0.05\n", moedas);

    qtdM = qtdM%5;
    moedas = qtdM;
    printf("%d moeda(s) de R$ 0.01\n", moedas);

    return 0;
}
