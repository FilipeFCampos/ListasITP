#include <stdio.h>

int main(void)  {

    //Variáveis
    int h1, m1, h2, m2;

    //Entrada
    scanf("%d %d", &h1, &m1);
    scanf("%d %d", &h2, &m2);

    //Detecta se (0 ≤ h ≤ 23, 0 ≤ m2 ≤ 59 e corrige
    if (m1 >= 60)   {

        m1 = m1 % 60;
        h1 = h1 + 1; 
    }

    if (h1 >= 24)   {

        h1 = h1 % 24;
    }

    //Converte as horas para minutos
    int tempo1 = h1 * 60 + m1;
    int tempo2 = h2 * 60 + m2;

    //Operação lógica
    if (tempo2 >= tempo1)    {

        tempo2 = tempo2 - tempo1;
        h1 = tempo2/60;
        m1 = tempo2%60;
    }

    else {

        tempo2 = tempo1 - tempo2;
        h2 = tempo2/60;
        m2 = tempo2%60;
        h1 = -(h2 - 23);
        m1 = 60 - m2;
    }

    //Saída
    printf("%dh%dmin", h1, m1);


    return 0;
}