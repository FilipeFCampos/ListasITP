#include <stdio.h>

int main()  {

    //Variáveis
    int n1, n2, n3, n4, maior;

    //Entrada
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    //Operação condicional
    if (n1 >= n2 && n1 >= n3 && n1 >= n4)   
    {
        maior = n1;
    }
    else if (n2 >= n1 && n2 >= n3 && n2 >= n4) 
    {
        maior = n2;
    }
    else if (n3 >= n1 && n3 >= n2 && n3 >= n4)
    {
        maior = n3;
    }
    else if (n4 >= n1 && n4 >= n2 && n4 >= n3)
    {
        maior = n4;
    }
    
    //Saída
    printf("Maior: %d", maior);
    
    return 0;
}