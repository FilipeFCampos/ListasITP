#include <stdio.h>

int main()  {

    //Variáveis
    int T, saude;

    //Entrada
    scanf("%d", &T);

    //Saída
    if (T >= 0 && T < 5)   {
        printf("Iniciante");
    }

    else if (T >= 5 && T < 20)  {
        scanf("%d", &saude);
        if (saude == 1) {
            printf("Intermediário");
        }

        else {
            printf("Iniciante");
        }
        
    }

    else    {
        scanf("%d", &saude);
        if (saude == 1) {
            printf("Avançado");
        }

        else {
            printf("Intermediário");
        }
    }
    
    
    return 0;
}