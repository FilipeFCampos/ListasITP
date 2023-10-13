#include <stdio.h>
typedef struct lanchonete_ambrosina
{
    int codigo;
    char produto[50];
    double preco;
}cardapio;

int main(){
    double preco_total = 0.0;
    int codigo_pedido = 0;
    int quantidade = 0;
    int n = 0;
    scanf("%i", &n);
    cardapio atualizacao[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &atualizacao[i].codigo);
        getchar();
        fgets(atualizacao[i].produto, 49, stdin);
        scanf("%lf", &atualizacao[i].preco);
    }
    while (1)
    {
        scanf("%i", &codigo_pedido);
        if (codigo_pedido == 0)
        {
            break;
        }
        scanf("%i", &quantidade);
        for (int j = 0; j < n; j++)
        {
            if (codigo_pedido == atualizacao[j].codigo)
            {
                preco_total += atualizacao[j].preco * quantidade;
            }
            else
            {
                continue;
            }
            
        }
        
    }
    printf("%.2lf", preco_total);
    return 0;
}
