#include <stdio.h>

int main(void)  {


    int n, soma = 1;
    int i = soma, j = soma;

    scanf("%d", &n);
    
    int max = n;

    for (i; i <= n + 1; i++)    {
        if (i == 2 * max)   {
            break;
        }

        printf("%d ", i);

        if (i == n)    {
            while (j < max)    {
                printf("\n");
                n += 1;
                i = 0 + soma;
                soma++;
                j++;
                break;
            }
        
        }

    }

    return 0;
}