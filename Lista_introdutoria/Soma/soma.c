#include <stdio.h>


int main()  {

    //Variáveis
    int A, B, C;

    //Entrada
    scanf("%d %d %d", &A, &B, &C);

    //Operação lógica
    if (A == B + C || B == C + A || C == A + B) {
        printf("Resposta: 1");
    }

    else {
        printf("Resposta: 0");
    }



    return 0;
}