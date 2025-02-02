#include <stdio.h>
 
int main() {
    int numFun, horasTrab;
    float precoHora, salario;

    scanf("%d%d%f", &numFun, &horasTrab, &precoHora);

    salario = horasTrab*precoHora;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", numFun, salario);
 
    return 0;
}
