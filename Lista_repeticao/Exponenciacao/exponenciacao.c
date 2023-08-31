#include <stdio.h>


int main(void)  {

    int n, b;

    scanf("%d %d", &n, &b);

    int x = b;

    do    {

        if (n == b) {
            break;
        }
        x = x * b;
        
    } while (x < n);

    if (x == n || n == 1) {
        printf("sim");
    }
    else    {
        printf("não");
    }
    

    return 0;
}