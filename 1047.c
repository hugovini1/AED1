#include <stdio.h>

int main(){
    int h1, m1, h2, m2;
    scanf("%d%d%d%d", &h1, &m1, &h2, &m2);

    if(h1==h2 && m1==m2){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else{
        int minTotal, horTotal;
        if(h1>h2){
            horTotal = 24 - (h1-h2);
            if(m2<m1){
                minTotal = 60 - (m1-m2);
                if(horTotal==0 || horTotal ==-1){
                    horTotal=23;
                }
                else{
                    horTotal--;
                }
            }
            else{
                minTotal = m2 - m1;
            }
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horTotal, minTotal);
        }
        else{
            horTotal = h2-h1;
            if(m2<m1){
                minTotal = 60 - (m1-m2);
                if(horTotal==0 || horTotal ==-1){
                    horTotal=23;
                }
                else{
                    horTotal--;
                }
            }
            else{
                minTotal = m2 - m1;
            }
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horTotal, minTotal);
        }
        
    }
    return 0;
}
