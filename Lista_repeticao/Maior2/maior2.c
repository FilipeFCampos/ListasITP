#include <stdio.h>

int main(void)  {

    int n, x, j = 0;

    //Entrada
    do  {

    scanf("%d", &n);
    
    } while (n < 0);

    for (int i = 0; i < n; i++) {
        
        scanf("%d", &x);
        if (j == 0) {

            j = x;
        }

        if (x > j) {
            
            j = x;
        }

    }

    //Saída
    printf("%d", j);
    

    return 0;
}