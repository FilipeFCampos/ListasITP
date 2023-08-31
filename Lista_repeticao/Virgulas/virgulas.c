#include <stdio.h>

int main(void)  {

    //Variáveis
    int x, n;

    //Entrada
    scanf("%d %d", &x, &n);

    //Loop
    for (int i = 0; i < n; i++) {

        if (i < n - 1)   {
            printf("%d, ", x );
        }
        else    {
            printf("%d", x);
        }

    }


    return 0;
}