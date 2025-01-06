#include <stdio.h>

int main(){
    int ini, fim;
    scanf("%d%d", &ini, &fim);

    if(ini==0 && fim==0){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else{
        int tempoTotal;
        if(fim<ini){
            tempoTotal = 24 - (ini - fim);
            if(tempoTotal==0){
                tempoTotal = 24;
            }
        }
        else{
            tempoTotal = fim - ini;
            if(tempoTotal==0){
                tempoTotal = 24;
            }
        }
        printf("O JOGO DUROU %d HORA(S)\n", tempoTotal);
    }

    return 0;
}
