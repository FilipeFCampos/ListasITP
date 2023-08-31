#include <stdio.h>

int main()  {

    //Variáveis
    int horas, minutos, segundos;

    //Entrada
    scanf("%d %d %d", &horas, &minutos, &segundos);

    //Calcular os segundos
    horas = horas * 60 * 60;
    minutos = minutos * 60;
    segundos = segundos + minutos + horas;

    //Saída
    printf("%d", segundos);


    return 0;
}