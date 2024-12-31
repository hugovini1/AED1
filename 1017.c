#include <stdio.h>

int main(){
    int tempoGasto, velMedia; 
    double qtdCombustivel;

    scanf("%d", &tempoGasto);
    scanf("%d", &velMedia);

    qtdCombustivel = (tempoGasto*velMedia);
    qtdCombustivel = qtdCombustivel/12;

    printf("%.3f\n", qtdCombustivel);

    return 0;
}
