/*distância entre dois pontos*/

#include <stdio.h>
#include <math.h>

int main(){
    float x1, y1, x2, y2, dist;

    scanf("%f", &x1);
    scanf("%f", &y1);
    scanf("%f", &x2);
    scanf("%f", &y2);

    dist = sqrt((pow((x2 - x1), 2) + pow((y2 - y1), 2)));

    printf("%.4f\n", dist);

    return 0;
}
