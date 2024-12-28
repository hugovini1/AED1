/*Calculo do volume de uma esfera dado o tamanho do raio*/

#include <stdio.h>
#include <math.h>

int main(){
    double pi=3.14159, raio, volume;

    scanf("%lf", &raio);

    raio = pow(raio, 3);

    volume = (4.0/3.0)*pi*raio;

    printf("VOLUME = %.3lf\n", volume);

    return 0;
} 
