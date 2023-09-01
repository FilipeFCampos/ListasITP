#include <stdio.h>

int main(void)  {

    //Variáveis
    int x, y;
    int dias = 0;

    //Entrada
    scanf("%d %d", &x, &y);


    while (x > y)   {
        dias++;
        x /= 2;
    }
        
    while (y > x)   {
        dias++;
        y /= 2;
    }
    
    //Saída
    printf("%d ", dias);


    return 0;
}