#include <stdio.h>

int main(void)  {

    int m, empates = 0;
    scanf("%d", &m);

    int lista[m][m];
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < m; i++) {
            scanf("%d", &lista[i][j]);
        }

    }

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < m; i++) {
            if (lista[i][j] == lista[j][i] && i != j)   {
                empates++;
            }

        }
        
    }

    printf("%d", empates / 2);


    return 0;
}