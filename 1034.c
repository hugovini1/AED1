#include <stdio.h>
#include <limits.h>

#define MAX_M 1000000

int main() {
    int T;
    scanf("%d", &T);  // Lê o número de instâncias
    
    while (T--) {
        int N, M;
        scanf("%d %d", &N, &M);  // Lê N (número de tipos de blocos) e M (comprimento desejado)
        
        int blocks[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &blocks[i]);  // Lê os comprimentos dos blocos disponíveis
        }
        
        // dp[i] armazenará o número mínimo de blocos necessários para formar o comprimento i
        int dp[M+1];
        for (int i = 0; i <= M; i++) {
            dp[i] = INT_MAX;  // Inicializa com infinito
        }
        dp[0] = 0;  // Nenhum bloco é necessário para comprimento 0
        
        // Processa os blocos para preencher a tabela dp
        for (int i = 0; i < N; i++) {
            for (int j = blocks[i]; j <= M; j++) {
                if (dp[j - blocks[i]] != INT_MAX) {
                    dp[j] = dp[j] < dp[j - blocks[i]] + 1 ? dp[j] : dp[j - blocks[i]] + 1;
                }
            }
        }
        
        // O resultado estará em dp[M]
        if (dp[M] == INT_MAX) {
            printf("-1\n");  // Se não for possível formar M com os blocos dados
        } else {
            printf("%d\n", dp[M]);  // Número mínimo de blocos
        }
    }
    
    return 0;
}
