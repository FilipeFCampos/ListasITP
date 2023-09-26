#include <stdio.h>

void saida(int x, int n);

int main(void)  {

    int m, n, x;

    scanf("%d %d", &m, &n);

    int lista[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &lista[i][j]);
        }

    }

    scanf("%d", &x);
    for (int i = 0; i < m; i++) {
        if (lista[i][x] == 1)   {
            x -= 1;
        }
        else if (lista[i][x] == 2)  {
            x += 1;
        }

    }

    saida(x, n);


    return 0;
}


void saida(int x, int n)   {
    if (x < 0 || x >= n)  {
        printf("ops");
    }
    else    {
        printf("%d", x);
    }
}