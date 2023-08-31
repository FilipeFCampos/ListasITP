#include <stdio.h>

int main()  {

    //Variáveis
    int a, b, divisao;

    //Entrada
    scanf("%d %d", &a, &b);
    divisao = a/b;

    //Operação condicional
    if (a%b == 0)   {

        //Saída
        printf("Resultado: %d", divisao);
    }

    return 0;
}