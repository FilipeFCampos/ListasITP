#include <stdio.h>
//os nomes das variáveis foram decididos por amigos em call.
int main(){
    int n = 0;
    int m = 0;
    int maior = 0;
    scanf("%i", &n);
    scanf("%i", &m);
    int joelinton[n][m];
    char suarez = 'a';
    int leticia = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%i", &joelinton[i][j]);
        }
    }
    scanf(" %c", &suarez);
    scanf("%i", &leticia);
    if (suarez == 'l')
    {
        maior = joelinton[leticia][0];
        for (int a = 1; a < m ; a++)
        {
            if (joelinton[leticia][a] > maior)
            {
                maior = joelinton[leticia][a];
            }
            else
            {
                continue;
            }
        }
        printf("%i", maior);
    }
    else if (suarez == 'c')
    {
        maior = joelinton[0][leticia];
        for (int s = 1; s < n ; s++)
        {
            if (joelinton[s][leticia] > maior)
            {
                maior = joelinton[s][leticia];
            }
            else
            {
                continue;
            }
            
        }
        printf("%i", maior);
    }
    return 0;
}
