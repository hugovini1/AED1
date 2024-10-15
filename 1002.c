#include <stdio.h>
 
int main() {
 
    double pi=3.14159, area, raio;

    
    scanf("%lf", &raio);
    raio *= raio;
    area = pi * raio;

    printf("A=%.4f\n", area);
    
 
    return 0;
}
