#include <stdio.h>

int main()  { 

    //Vatiáveis
    int n;
    int ultimo;
    int resto;

    //Entrada
    scanf("%d", &n);

    //Calcula-se o resultado
    ultimo = n%10;
    resto = n/10;

    //Saída
    printf("%d %d\n", resto, ultimo);

    return 0;
}