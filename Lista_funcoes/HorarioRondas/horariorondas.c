#include <stdio.h>

int conversao();

void tempo();

int h, m, s;

//Main
int main(void)  {

    scanf("%d %d %d", &h, &m, &s);

    tempo();

    return 0;
}

//Variação de horário
void tempo() {

    int h0 = h;
    int m0 = m;
    int s0 = s;

    for (int ronda = 0; ronda < 4; ronda++) {
        h = h0;
        m = m0;
        s = s0;

        switch(ronda)   {
            case 0:
                h += 1;
                break;
            case 1:
                h += 2;
                m += 10;
                s += 30;
                break;
            case 2:
                h += 4;
                m += 40;
                s += 50;
                break;
            case 3:
                h += 12;
                m += 5;
                s += 5;
                break;

        }

        conversao();
        printf("%02d:%02d:%02d\n", h, m, s);
    }

}

//Ajuste de hora (60seg = 1min e 0seg)
int conversao() {

    if (s >= 60)   {

        s %= 60;
        m += 1;
    }

    if (m >= 60)   {

        m %= 60;
        h += 1; 
    }

    if (h >= 24)   {

        h %= 24;
    }

    return h, m, s;

}