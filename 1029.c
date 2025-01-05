/*Fibonacci*/

#include <stdio.h>

int qtd=0;

int Fibonacci(int fib){
    qtd++;
    if(fib<=1){
        return fib;
    }
    return Fibonacci(fib-1) + Fibonacci(fib-2);
}

int main(){
    int numCasos, fibDe;
    scanf("%d", &numCasos);
    for(int i=0; i<numCasos ; i++){
        scanf("%d", &fibDe);
        qtd=0;
        int a;
        a = Fibonacci(fibDe);
        printf("fib(%d) = %d calls = %d\n", fibDe, qtd -1 , a);
    }
    return 0;
}
