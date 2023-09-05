#include <stdio.h>
#include <math.h>

//Declaração de funções
int soma(int n);

int colegas(int x, int y);

//Main
int main(void)  {

    int A, B;

    //Entrada
    scanf("%d %d", &A, &B);

    colegas(A, B);

    return 0;
}


//Divisores próprios
int soma(int n) {

    int divisor = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {

            divisor += i;
        }

    }

    return divisor;
}


//Printar resultado
int colegas(int x, int y)  {

    //Saída
    if (fabs(soma(x) - y) <= 2 && fabs(soma(y) - x) <= 2)   {
        printf("S");
    }
    else    {
        printf("N");
    }

    return 0;
}