#include <stdio.h>

int main(void) {
    int n, i, altura;
    int maior1 = 0, maior2 = 0;
    int posicao1 = -1, posicao2 = -1;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &altura);

        if (altura > maior1) {
            maior2 = maior1;
            posicao2 = posicao1;
            maior1 = altura;
            posicao1 = i + 1;
        } else if (altura > maior2) {
            maior2 = altura;
            posicao2 = i + 1;
        }
    }

    if (posicao1 > posicao2) {
        int temp = posicao1;
        posicao1 = posicao2;
        posicao2 = temp;
    }

    printf("%d\n", posicao2 - posicao1 - 1);

    return 0;
}
