/*Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.*/

#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, atr, cir, tra, qua, ret;
    
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    atr = (a*c)/2;
    cir = 3.14159*c*c;
    tra = (a+b)/2*c;
    qua = b*b;
    ret = a*b;

    printf("TRIANGULO: %.3lf\n", atr);
    printf("CIRCULO: %.3lf\n", cir);
    printf("TRAPEZIO: %.3lf\n", tra);
    printf("QUADRADO: %.3lf\n", qua);
    printf("RETANGULO: %.3lf\n", ret);

    return 0;
}
