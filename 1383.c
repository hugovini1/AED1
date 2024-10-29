#include <stdio.h>
int verificaLinhaColuna(int sudokuBase[9][9]){
    int i, j, k, guardaColuna[11], guardaLinha[11];
    //verifica cada coluna
    for(i=0 ; i<9 ; i++){
        for(j=0 ; j<11 ; j++){
            guardaColuna[j]=0;
        }
        for(k=0 ; k<9; k++){
            guardaColuna[sudokuBase[k][i]]++;
        }
        for(j=1 ; j<10 ; j++){
            if(guardaColuna[j]!=1){
                return 0;
            }
        }
    }
    //verifica cada linha
    for(i=0 ; i<9 ; i++){
        for(j=0 ; j<11 ; j++){
            guardaLinha[j]=0;
        }
        for(k=0 ; k<9; k++){
            guardaLinha[sudokuBase[i][k]]++;
        }
        for(j=1 ; j<10 ; j++){
            if(guardaLinha[j]!=1){
                return 0;
            }
        }
    }
    return 1;
}
int verifica3x3(int sudoku[9][9]){
    int linhai, colunaj, k, l, guarda3x3[11];
    for(int c=0 ; c<7 ; c+=3){
    //passa para a proxima mat3x3 na horizontal para a analise ser feita na vertical
            for(int a=0 ; a<7 ; a+=3){
            //verifica cada mat3x3 na vertical
            k=a;
            for(int j=0 ; j<11 ; j++){
                guarda3x3[j]=0;
            } 
            for(linhai=k ; linhai<k+3 ; linhai++){
                l=c;
                for(colunaj= l ; colunaj<l+3 ; colunaj++){
                    guarda3x3[sudoku[linhai][colunaj]]++;
                }
            }
            for(int j=1 ; j<10 ; j++){
                if(guarda3x3[j]!=1){
                    return 0;
                }        
            }
        }
    }
    return 1;
}
int main(){
    int MAT[9][9], linha, coluna, numMatrizes, i, instancia[100];
    scanf("%d", &numMatrizes);
    for(i=0 ; i<numMatrizes ; i++){
        for(linha=0 ; linha<9 ; linha++){
            for(coluna=0 ; coluna<9 ; coluna++){
                scanf("%d", &MAT[linha][coluna]);
            }
        }
        if(verificaLinhaColuna(MAT) && verifica3x3(MAT)){
            printf("Instancia %d\nSIM\n", i+1);
        }
        else{
            printf("Instancia %d\nNAO\n", i+1);
        }
    }

    return 0;
}
