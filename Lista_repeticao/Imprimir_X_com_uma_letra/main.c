#include <stdio.h>

int main(){
    int linhas = 0;
    char letra = ' ';
    scanf("%i", &linhas);
    int par_impar = 0;
    if ((linhas % 2) == 0)
    {
        par_impar = 1;
    }
    int espacos = ((linhas - 1) -2);
    int espacos_comeco = 0;
    linhas = (linhas - 1) / 2;
    scanf(" %c", &letra);
    for (int i = 1; i <= linhas; i++)
    {
        for (int l = 0; l < espacos_comeco; l++)
        {
            printf(" ");
        }
        if (i != linhas)
        {
            if ((linhas % 2) != 0)
            {
                printf("%c", letra);
            for (int j = 0; j < espacos; j++)
            {
                printf(" ");
            }
            printf(" %c\n", letra);
            espacos = espacos - 2;
            }
            else
            {
                printf("%c", letra);
            for (int j = 1; j < espacos; j++)
            {
                printf(" ");
            }
            printf(" %c\n", letra);
            espacos = espacos - 2;
            }
        }
        else
        {
            if (par_impar == 1)
            {
                printf("%c %c\n", letra, letra);
            }
            else
            {
                printf("%c%c\n", letra, letra);
            }
        }
        espacos_comeco += 1;
    }
    if (par_impar == 1)
    {
        for (int o = 0; o < espacos_comeco; o++)
        {
            printf(" ");
        }
        printf("%c\n", letra);
    }
    for (int k = 1; k <= linhas; k++)
    {
        for (int c = 1; c < espacos_comeco; c++)
            {
                printf(" ");
            }
        if (k == 1)
        {
            if (par_impar == 1)
            {
                printf("%c %c\n", letra, letra);
            }
            else
            {
                printf("%c%c\n", letra, letra);
            }
            espacos = espacos + 2;
        }
        else
        {
            printf("%c", letra);
            for (int j = 1; j < espacos; j++)
            {
                printf(" ");
            }
            printf(" %c\n", letra);
            espacos = espacos + 2;
        }
        espacos_comeco -= 1;
    }
    return 0;
}