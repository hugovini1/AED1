/*Faça um programa que leia três valores e apresente o maior dos três valores lidos */
#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, maior;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    maior = (a + b + abs(a-b))/2;
    maior = (maior + c + abs(maior-c))/2;

    printf("%d eh o maior", maior);

    return 0;
}
