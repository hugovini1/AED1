/*Opere duas frações, mostre o resultado e depois simplefique-as*/

#include <stdio.h>

typedef struct{
    int numerador, denominador;
} racional;

int funcMdc(int a, int b){
    if(b==0){
        return a;
    }
    return funcMdc(b, a%b);
}

int main(){
    racional n1, n2;
    char operacao;
    int i, numTestes, reNumerador, reDenominador, mdc;

    scanf("%d", &numTestes);
    for(i=0 ; i<numTestes ; i++){
        scanf("%d / %d %c %d / %d", &n1.numerador, &n1.denominador, &operacao, &n2.numerador, &n2.denominador);

        switch (operacao)
        {
        case '+':
            reNumerador = (n1.numerador*n2.denominador + n2.numerador*n1.denominador);
            reDenominador =  (n1.denominador*n2.denominador);
            printf("%d/%d = ", reNumerador, reDenominador);
            break;
        
        case '-':
            reNumerador = (n1.numerador*n2.denominador - n2.numerador*n1.denominador);
            reDenominador =  (n1.denominador*n2.denominador);
            printf("%d/%d = ", reNumerador, reDenominador);
            break;
        
        case '*':
            reNumerador = (n1.numerador*n2.numerador);
            reDenominador = (n1.denominador*n2.denominador);
            printf("%d/%d = ", reNumerador, reDenominador);    
            break;
        
        case '/':
            reNumerador = (n1.numerador*n2.denominador);
            reDenominador = (n2.numerador*n1.denominador);
            printf("%d/%d = ", reNumerador, reDenominador);
            break;
        }

        mdc = funcMdc(reNumerador, reDenominador);
        reNumerador /= mdc;
        reDenominador /= mdc;
        if(reDenominador<0){
            reDenominador *= -1;
            reNumerador *=-1;
        }
        printf("%d/%d\n", reNumerador, reDenominador);
    } 

    return 0;
}
