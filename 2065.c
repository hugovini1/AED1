#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int tempoTotal;
    int idCaixa;
} Caixa;

int comparar(const void *a, const void *b) {
    Caixa *ca1 = (Caixa *)a;
    Caixa *ca2 = (Caixa *)b;
    if (ca1->tempoTotal == ca2->tempoTotal) {
        return ca1->idCaixa - ca2->idCaixa;
    }
    return ca1->tempoTotal - ca2->tempoTotal;
}

void minHeapify(Caixa heap[], int tamanho, int i) {
    int menor = i;
    int esq = 2 * i + 1;
    int dir = 2 * i + 2;
    if (esq < tamanho && comparar(&heap[esq], &heap[menor]) < 0)
        menor = esq;
    if (dir < tamanho && comparar(&heap[dir], &heap[menor]) < 0)
        menor = dir;
    if (menor != i) {
        Caixa temp = heap[i];
        heap[i] = heap[menor];
        heap[menor] = temp;
        minHeapify(heap, tamanho, menor);
    }
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int tempos[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &tempos[i]);
    }

    int clientes[M];
    for (int i = 0; i < M; i++) {
        scanf("%d", &clientes[i]);
    }

    Caixa heap[N];
    for (int i = 0; i < N; i++) {
        heap[i].tempoTotal = 0;
        heap[i].idCaixa = i;
    }

    for (int i = 0; i < M; i++) {
        int idCaixa = heap[0].idCaixa;
        int tempoAtendimento = tempos[idCaixa] * clientes[i];
        heap[0].tempoTotal += tempoAtendimento;
        minHeapify(heap, N, 0);
    }

    int tempoFinal = 0;
    for (int i = 0; i < N; i++) {
        if (heap[i].tempoTotal > tempoFinal) {
            tempoFinal = heap[i].tempoTotal;
        }
    }

    printf("%d\n", tempoFinal);
    return 0;
}
