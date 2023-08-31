#include <stdio.h>

int main(void)  {

    //Variáveis
    int a, b;

    //Entrada
    scanf("%d %d", &a, &b);

    if (a < b)  {

        for (a; a <= b; a++)    {
            //Saída
            printf("%d ", a);
        }

    }

    else {

        for (a; a >= b; a--)    {
            //Saída
            printf("%d ", a);
        }

    }

    return 0;
}