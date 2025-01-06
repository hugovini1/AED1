/*MDC de figurinhas*/

#include <stdio.h>

int funcMdc(int a, int b){
    if(b==0){
        return a;
    }
    return funcMdc(b, a%b);
}

int main(){
    int numEntradas, f1, f2;
    scanf("%d", &numEntradas);

    for (int i=0; i<numEntradas ; i++){
        scanf("%d%d", &f1, &f2);
        int mdc;
        mdc = funcMdc(f1, f2);
        printf("%d\n", mdc);
    }

    return 0;
}
