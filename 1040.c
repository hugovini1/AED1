/*Média de 4 notas*/

#include <stdio.h>

int main(){
    double n1, n2, n3, n4, media;
    scanf("%lf%lf%lf%lf", &n1, &n2, &n3, &n4);

    media = (n1*2 + 3*n2 + 4*n3 + n4)/10;

    if(media>=7.0){
        printf("Media: %.1lf\n", media);
        printf("Aluno aprovado.\n");
    }
    else if(media<5.0){
        printf("Media: %.1lf\n", media);
        printf("Aluno reprovado.\n");
    }
    else{
        double exame, medFinal;
        printf("Media: %.1lf\n", media);
        printf("Aluno em exame.\n");
        scanf("%lf", &exame);
        printf("Nota do exame: %.1lf\n", exame);
        medFinal = (media+exame)/2;
        if(medFinal>=5){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", medFinal);
        }
        else{
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", medFinal);
        }
    }

    return 0;
}
