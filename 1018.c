#include <stdio.h>

int main(){
    int valor, notas, qtd;

    scanf("%d", &valor);

    notas = valor/100;
    printf("%d nota(s) de R$ 100,00\n", notas);

    qtd = valor%100;
    notas = qtd/50;
    printf("%d nota(s) de R$ 50,00\n", notas);

    qtd = qtd%50;
    notas = qtd/20;
    printf("%d nota(s) de R$ 20,00\n", notas);

    qtd = qtd%20;
    notas = qtd/10;
    printf("%d nota(s) de R$ 10,00\n", notas);

    qtd = qtd%10;
    notas = qtd/5;
    printf("%d nota(s) de R$ 5,00\n", notas);

    qtd = qtd%5;
    notas = qtd/2;
    printf("%d nota(s) de R$ 2,00\n", notas);

    qtd = qtd%2;
    notas = qtd/1;
    printf("%d nota(s) de R$ 1,00\n", notas);
    return 0;
}
