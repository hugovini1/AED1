#include <stdio.h>
 
int main() {
 
    int dias_total, anos, resto, meses, dias;

    scanf("%d", &dias_total);

    anos = dias_total/365;
    resto = dias_total%365;
    meses = resto/30;
    dias = resto%30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
    

 
    return 0;
