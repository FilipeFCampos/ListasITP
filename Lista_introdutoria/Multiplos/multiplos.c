#include <stdio.h>

int main() {

    //Variáveis
    int n;

    //Entrada
    scanf("%d", &n);

    //Operação lógica
    if (n > 0 && n%3 == 0 && n%5 != 0) {
        printf("Resposta: 1");
    }

    else {
        printf("Resposta: 0");
    }


    return 0;
}