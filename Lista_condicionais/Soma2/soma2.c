#include <stdio.h>


int main()  {

    //Variáveis
    int a, b, c;

    //Entrada
    scanf("%d %d %d", &a, &b, &c);

    //Operação lógica
    if (a == b + c || b == c + a || c == a + b) {
        printf("Um dos números é a soma dos outros dois");
    }

    else {
        printf("Nenhum dos números é a soma dos outros dois");
    }


    return 0;
}