/*Calcule a média de cosumo de um carro dado a distância percorrida e quantos litros de combustivel gasto*/
#include <stdio.h>

int main(){
    int dist;
    float litros, media;

    scanf("%d", &dist);
    scanf("%f", &litros);

    media = dist/litros;

    printf("%.3f km/l\n", media);

    return 0;
}
