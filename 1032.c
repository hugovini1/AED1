#include <stdio.h>
#include <stdbool.h>

#define MAX_N 3501

void gerar_primos(int primos[], int tamanho) {
    int contador = 0;
    int num = 2;
    while (contador < tamanho) {
        bool eh_primo = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                eh_primo = false;
                break;
            }
        }
        if (eh_primo) {
            primos[contador] = num;
            contador++;
        }
        num++;
    }
}

int josephus(int n, int primos[]) {
    int resultado = 0;
    for (int i = 2; i <= n; i++) {
        resultado = (resultado + primos[n - i]) % i;
    }
    return resultado + 1;
}

int main() {
    int primos[MAX_N];
    gerar_primos(primos, MAX_N);

    int n;
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        printf("%d\n", josephus(n, primos));
    }
    return 0;
}
