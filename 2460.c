#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int id;
    struct no *proximo;
}No;

void inserirId(No **fila, No **ultimo, int ide){
    No *novo=malloc(sizeof(No)), *aux;
    novo->id = ide;
    novo->proximo = NULL;
    if(*fila == NULL){
        *fila = novo;
        *ultimo = novo;
    }
    else{
        (*ultimo)->proximo = novo; 
        *ultimo = novo;  
    }
}

void removerId(No **fila, No **ultimo, int ide){
    if(*fila==NULL) return;
    No *aux=*fila, *anterior=NULL;

    if(aux != NULL && aux->id == ide){
        *fila = aux->proximo;
        free(aux);
        return;
    }
    
    while(aux!=NULL && aux->id!=ide){
        anterior = aux;
        aux = aux->proximo;
    }

    if(aux==*ultimo){
        *ultimo = anterior;
    }
    if (anterior != NULL) {
        anterior->proximo = aux->proximo;
    }
}

void imprimirFila(No *fila){
    while(fila){
        printf("%d ", fila->id);
        fila = fila->proximo;
    }
    printf("\n");
}

int main(){
    int N, M, i, aux;
    No *fila=NULL, *ultimo=NULL;

    scanf("%d", &N);

    for(i=0 ; i<N ; i++){
        scanf("%d", &aux);
        inserirId(&fila, &ultimo, aux);
    }

    scanf("%d", &M);

    for(i=0 ; i<M ; i++){
        scanf("%d", &aux);
        removerId(&fila, &ultimo, aux);
    }

    imprimirFila(fila);

    return 0;    
}
