#include <stdio.h>


int main(void)  {

    int vetorA[15];
    int multi2 = 0, multi3 = 0, nenhum = 0;

    for (int i = 0; i < 15; i++)    {
        scanf("%d", &vetorA[i]);
    }

    for (int j = 0; j < 15; j++)    {
        if (vetorA[j] % 2 == 0) {
            multi2 += 1;
        }
        if (vetorA[j] % 3 == 0) {
            multi3 += 1;
        }
        if (vetorA[j] % 2 != 0 && vetorA[j] % 3 != 0)    {
            nenhum += 1;
        }

    }

    int vetorB[multi2], vetorC[multi3], vetorD[nenhum];
    int n1 = 0, n2 = 0, n3 = 0;

    for (int n = 0; n < 15; n++)    {
        if (vetorA[n] % 2 == 0) {
            vetorB[n1++] = vetorA[n];
        }
        if (vetorA[n] % 3 == 0) {
            vetorC[n2++] = vetorA[n];
        }
        if (vetorA[n] % 2 != 0 && vetorA[n] % 3 != 0)   {
            vetorD[n3++] = vetorA[n];
        }

    }

    printf("B = [");
    for (int x = 0; x < multi2; x++)    {
        if (x == multi2 - 1)    {
            printf("%d", vetorB[x]);
        }
        else    {
            printf("%d, ", vetorB[x]);
        }
    }
    printf("]\n");

    printf("C = [");
    for (int y = 0; y < multi3; y++)    {
        if (y == multi3 - 1)    {
            printf("%d", vetorC[y]);
        }
        else    {
            printf("%d, ", vetorC[y]);
        }
    }
    printf("]\n");

    printf("D = [");
    for (int z = 0; z < nenhum; z++)    {
        if (z == nenhum - 1)    {
            printf("%d", vetorD[z]);
        }
        else    {
            printf("%d, ", vetorD[z]);
        }
    }
    printf("]\n");


    return 0;
}