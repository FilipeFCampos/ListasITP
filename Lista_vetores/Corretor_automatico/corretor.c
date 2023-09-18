#include <stdio.h>

int main(void)  {

    int n, i, acertos = 0;
    scanf("%d", &n);

    int gabarito[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &gabarito[i]);
    }

    int respostas[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &respostas[i]);
        if (respostas[i] == gabarito[i])    {
            acertos++;
        }
    }

    if (acertos == 1)   {
        printf("%d acerto", acertos);
    }
    else    {
        printf("%d acertos", acertos);
    }


    return 0;
}