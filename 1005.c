#include <stdio.h>

int main(){
    double a, b, media;

    scanf("%lf%lf", &a, &b);

    a = a*3.5;
    b = b*7.5;
    media = (a + b)/11;

    printf("%.5f\n", media);

    return 0;
}
