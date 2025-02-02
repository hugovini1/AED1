#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

int pilha(char *expr) {
    int top = -1;
    char soma[MAX];
    
    for (int i = 0; expr[i] != '\0'; i++) {
        if (expr[i] == '(') {
            soma[++top] = '(';
        } 
        else if (expr[i] == ')') {
            if (top == -1) {
                return 0;  
            }
            top--;
        }
    }
    return (top == -1);
}

int main() {
    char expr[MAX];
    while (fgets(expr, MAX, stdin)) {
        if (expr[0] == '\n') {
            break;
        }
        if (pilha(expr)) {
            printf("correct\n");
        } else {
            printf("incorrect\n");
        }
    }

    return 0;
}
