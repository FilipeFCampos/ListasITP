#include <stdio.h>

int main(void)  {

    int m, n;
    int irrigador = 0, fertil = 0;

    scanf("%d %d", &m, &n);

    int lista[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &lista[i][j]);
        }

    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            //Determinar setor fértil não irrigado
            if (lista[i][j] == 1)   {
                if (lista[i - 1][j] != 2 && lista[i + 1][j] != 2 && lista[i][j - 1] != 2 && lista[i][j + 1] != 2)    {
                    fertil++;
                }
                
            }

            //Determinar setores férteis irrigados
            if (lista[i][j] == 2)   {
                if (lista[i - 1][j] == 1)    {
                    irrigador++;
                    lista[i - 1][j] = 0;
                }
                if (lista[i + 1][j] == 1)    {
                    irrigador++;
                    lista[i + 1][j] = 0;
                }
                if (lista[i][j - 1] == 1)    {
                    irrigador++;
                    lista[i][j - 1] = 0;
                }
                if (lista[i][j + 1] == 1)    {
                    irrigador++;
                    lista[i][j + 1] = 0;
                }

            }

        }

    }

    printf("%d %d", irrigador, fertil);


    return 0;
}