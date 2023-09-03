#include <stdio.h>

int main() {
    int linhas = 0;
    int j = 1;
    scanf("%i", &linhas);
    if (linhas > 0) 
    {
        printf(" %i\n", j);
        j += 1;
        for (int i = 1; i < linhas; i++) 
        {
            for (int l = 0; l <= i; l++) 
            {
                if (j < 10)
                {
                    printf(" %i ", j);
                    j += 1;
                }
                else
                {
                    printf("%i ", j);
                    j += 1;
                }
                
                
            }
            printf("\n");
        }
    } 
    else 
    {
        printf("Você entrou com %i, tente de novo na próxima", linhas);
    }

    return 0;
}