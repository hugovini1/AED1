#include <stdio.h>

int main(){
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);

    if(a+b>c && a+c>b && b+c>a){
        double per;
        per = a + b +c;
        printf("Perimetro = %.1lf\n", per);
    }
    else{
        double areaTrap;
        areaTrap = ((a+b)*c)/2;
        printf("Area = %.1lf\n", areaTrap);
    }
    return 0;
}
