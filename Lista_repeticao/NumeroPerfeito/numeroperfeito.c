#include <stdio.h>

int main(void)  {

    //Variáveis
    int x, soma = 0;
    int check = 0;

    //Entrada
    scanf("%d", &x);

    if (x > 0)  {
        for (int i = 1; i < x; i++) {

            if (x % i == 0) {
                soma = soma + i;
            }

        }

        if (soma == x)  {
            check = 1;
        }

    } 

    //Saída
    if (check == 1) {
        printf("Perfeito");
    }    
    
    else    {
        printf("Não perfeito");
    }


    return 0;
}