#include <stdio.h>

int main()  {

    //Variáveis
    char letra;
    int resultado;

    //Entrada
    scanf("%c", &letra);

    //Converte o char em seu valor no ASCII e soma 1
    resultado = letra;
    letra = resultado + 1;

    //Saída
    printf("%c", letra);


    return 0;
}