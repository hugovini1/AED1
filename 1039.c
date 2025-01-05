#include <stdio.h>
#include <math.h>

int main(){
    int r1, x1, y1, r2, x2, y2;
    double contemRaioFlor;

    while(scanf("%d%d%d%d%d%d", &r1, &x1, &y1, &r2, &x2, &y2) != EOF){
        contemRaioFlor = sqrt(pow(x2-x1,2) + pow(y2-y1, 2));
        if(r1 >= contemRaioFlor+r2){
            printf("RICO\n");    
        }
        else{
            printf("MORTO\n");
        }
    }

    return 0;
}
