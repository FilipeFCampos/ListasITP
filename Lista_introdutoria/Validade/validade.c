#include <stdio.h>

int main() {
    
    //Variáveis
    int tempo, dias, meses, anos;

    //Entrada
    scanf("%d", &tempo);

    //Calcular a validade
    anos = tempo / 365;
    meses = tempo % 365 / 30;
    dias = tempo % 365 % 30;

    //Saída
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);


    return 0;
}