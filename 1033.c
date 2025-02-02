#include <stdio.h>

long long calcular_periodo_pisano(long long b) {
    long long a = 0, bb = 1, c;
    long long periodo = 0;
    do {
        c = (a + bb) % b;
        a = bb;
        bb = c;
        periodo++;
    } while (a != 0 || bb != 1);
    return periodo;
}

long long fib_mod(long long n, long long mod) {
    if (n == 0) return 0;
    long long periodo = calcular_periodo_pisano(mod);
    n = n % periodo;
    if (n == 0) return 0;
    long long a = 0, b = 1;
    for (long long i = 2; i <= n; i++) {
        long long temp = (a + b) % mod;
        a = b;
        b = temp;
    }
    return b;
}

int main() {
    long long n, b;
    int caso = 1;
    while (1) {
        scanf("%lld %lld", &n, &b);
        if (n == 0 && b == 0) break;
        
        long long fib_n1 = fib_mod(n + 1, b);
        
        long long chamadas = (2 * fib_n1 - 1) % b;
        if (chamadas < 0) chamadas += b;
        
        printf("Case %d: %lld %lld %lld\n", caso, n, b, chamadas);
        caso++;
    }
    return 0;
}
