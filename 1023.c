/**/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int moradores;
    int consumo;
} Imovel;

int comparar(const void *a, const void *b) {
    Imovel *imovelA = (Imovel *)a;
    Imovel *imovelB = (Imovel *)b;
    int consumoPorMoradorA = imovelA->consumo / imovelA->moradores;
    int consumoPorMoradorB = imovelB->consumo / imovelB->moradores;

    return consumoPorMoradorA - consumoPorMoradorB; 
}

void printConsumoMedioTruncado(double consumoMedio) {
    int consumoTruncado = (int)(consumoMedio * 100);
    printf("Consumo medio: %.2f m3.\n", consumoTruncado / 100.0);
}

int main() {
    int n, cidade = 0;

    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        cidade++;

        Imovel *imoveis = malloc(n * sizeof(Imovel));
        int totalMoradores = 0, totalConsumo = 0;

        for (int i = 0; i < n; i++) {
            scanf("%d %d", &imoveis[i].moradores, &imoveis[i].consumo);
            totalMoradores += imoveis[i].moradores;
            totalConsumo += imoveis[i].consumo;
        }

        qsort(imoveis, n, sizeof(Imovel), comparar);

        if (cidade > 1) printf("\n");
        printf("Cidade# %d:\n", cidade);

        int moradoresAgrupados = imoveis[0].moradores;
        int consumoAtual = imoveis[0].consumo / imoveis[0].moradores;

        for (int i = 1; i < n; i++) {
            int consumoPorMorador = imoveis[i].consumo / imoveis[i].moradores;

            if (consumoPorMorador == consumoAtual) {
                
                moradoresAgrupados += imoveis[i].moradores;
            } else {
                
                printf("%d-%d ", moradoresAgrupados, consumoAtual);

                
                moradoresAgrupados = imoveis[i].moradores;
                consumoAtual = consumoPorMorador;
            }
        }

        printf("%d-%d\n", moradoresAgrupados, consumoAtual);

        double consumoMedio = (double)totalConsumo / totalMoradores;
        printConsumoMedioTruncado(consumoMedio);

        free(imoveis);
    }

    return 0;
}
