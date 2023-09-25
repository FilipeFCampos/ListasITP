#include <stdio.h>

int main(){
    int tamanho = 0;
    scanf("%i", &tamanho);
    int matriz[tamanho][tamanho];
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            scanf("%i", &matriz[i][j]);
        }
    }
    int soma = matriz[0][0];
    for (int a = 1; a < tamanho; a++)
    {
        soma = soma + matriz[a][a];
    }
    printf("%i", soma);


    return 0;
}
