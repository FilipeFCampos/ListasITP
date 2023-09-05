#include <stdio.h>


int primo (int n);


int main(void)  {

    int n;
    int bool = 0;

    scanf("%d", &n);

    if (primo(n) == 1)  {
        int par = n + 2;

        if (primo(par) == 1)   {
            printf("Numero forma par de gemeos");
            bool = 1;
        }

    }

    if (bool == 0)   {
        printf("Numero nao forma par de gemeos");
    }

    return 0;
}




int primo(int n)  {

    int bool = 0;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            bool = 0;
            break;
        }

        else    {
            bool = 1;
        }

    }

    if (bool == 1)  {
        return 1;
    }

    else    {
        return 0;
    }

}