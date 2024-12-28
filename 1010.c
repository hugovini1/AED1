/*Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2 
e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.*/
#include <stdio.h>

int main(){
    int cont=0;
    float vet[5], soma;

    while(cont<6){
        scanf("%f", &vet[cont]);
        cont++;
    }

    soma = vet[1]*vet[2] + vet[4]*vet[5];

    printf("VALOR A PAGAR: R$ %.2f\n", soma);

    return 0;
}
