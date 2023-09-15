#include <stdio.h>

int main(){
    int tamanho = 0;
    scanf("%i", &tamanho);
    if (tamanho > 10)
    {
        printf("Muitos elementos");
    }
    else
    {
    int array1[tamanho];
    int array2[tamanho];
    int array_resultado[tamanho];
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%i", &array1[i]);
    }
    for (int j = 0; j < tamanho; j++)
    {
        scanf("%i", &array2[j]);
    }
    for (int a = 0; a < tamanho; a++)
    {
        array_resultado[a] = array1[a] + array2[a];
    }
    for (int q = 0; q < tamanho; q++)
    {
        printf("%i ", array_resultado[q]);
    }
    
    }
    

    return 0;
}
