#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    int total, sorteado;

    scanf("%d %d", &total, &sorteado);

    char *alunos[total];

    for (int i = 0; i < total; i++) {
        alunos[i] = malloc(21 * sizeof(char));
        scanf("%s", alunos[i]);
    }

    qsort(alunos, total, sizeof(char *), compare);

    printf("%s\n", alunos[sorteado-1]);

    for (int i = 0; i < total; i++) {
        free(alunos[i]);
    }

    return 0;
}
