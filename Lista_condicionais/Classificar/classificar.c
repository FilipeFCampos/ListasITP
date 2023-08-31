#include <stdio.h>

int main(void)  {

    //Variáveis
    int P, R, M;

    //Entrada
    scanf("%d %d %d", &P, &R, &M);

    //Saída
    if (P >= M) {
        printf("O time já está classificado");
    }
    else  {
        if (P + 3 * R >= M)    {
            printf("É possível se classificar");
        }
        else  {
            printf("Não é possível se classificar");
        }

    }


    return 0;
}