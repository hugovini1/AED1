/*Dado uma certa distância em km, retorna em quantos minutos um carro B consegue se distanciar do carro A nessa distância*/

#include <stdio.h>

int main(){
    int dist, tempo;

    scanf("%d", &dist);

    tempo = dist/0.5;

    printf("%d minutos\n", tempo);

    return 0;
}
