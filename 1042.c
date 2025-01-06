/*Ordenação de 3 vetores*/

#include <stdio.h>

int main(){
    int vet[3], i, k, vetOrdenado[3];

    for(i=0 ; i<3 ; i++){
        scanf("%d", &vet[i]);
        vetOrdenado[i] = vet[i];
    }

    for(i=0 ; i<2 ; i++){
        int temp;
        for(k=1; k<3 ; k++){
            if(vetOrdenado[i]>vetOrdenado[k]){
                temp = vetOrdenado[k];
                vetOrdenado[k] = vetOrdenado[i];
                vetOrdenado[i] = temp;
            }
        }
    }

    for(i=0 ; i<3 ; i++){
        printf("%d\n", vetOrdenado[i]);
    }
    printf("\n");
    for(i=0 ; i<3 ; i++){
        printf("%d\n", vet[i]);
    }

    return 0;
}
