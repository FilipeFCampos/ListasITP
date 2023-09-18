#include <stdio.h>

int main(void)  {

    int n, repeticao = 0;
    int n_repeticoes = 0, debug = 0;
    scanf("%d", &n);

    int vetor[n], resultado[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int j = 0; j < n; j++) {

        for (int x = 0; x < n; x++) {
            if (vetor[j] == resultado[x])  {
                repeticao++;
            }

        }

        if (repeticao == 0)  {
            resultado[debug++] = vetor[j];
        }
        else    {
            n_repeticoes++;
        }
        repeticao = 0;

    }
    
    for (int y = 0; y < n - n_repeticoes; y++) {
        printf("%d ", resultado[y]);
    }


    return 0;
}