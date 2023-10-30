#include <stdio.h>
#include <string.h>


//Estruturas de dados
typedef enum    {

    LUTA,
    AVENTURA,
    ESTRATEGIA,
    ESPORTE,
    RPG

}   TipoJogo;

typedef struct  {

    char nome[51];
    TipoJogo jogo;

}   Jogadores;


//Funções
int definir_tipo(char type[]);

void saida(void);


//Variável global
int quantidades[5] = {};


//Main
int main(void)  {

    char type[11];
    int x;
    scanf("%d", &x);
    Jogadores players[x];

    for (int i = 0; i < x; i++) {
        scanf("%s", players[i].nome);
        scanf("%s", type);
        players[i].jogo = definir_tipo(type);
    }

    saida();

    return 0;
}


int definir_tipo(char type[])  {
    if (strcmp(type, "LUTA") == 0)   {
        quantidades[0]++;
        return 0;
    }
    if (strcmp(type, "AVENTURA") == 0)   {
        quantidades[1]++;
        return 1;
    }
    if (strcmp(type, "ESTRATEGIA") == 0)   {
        quantidades[2]++;
        return 2;
    }
    if (strcmp(type, "ESPORTE") == 0)   {
        quantidades[3]++;
        return 3;
    }
    if (strcmp(type, "RPG") == 0)   {
        quantidades[4]++;
        return 4;
    }

    return 5;
}


void saida(void)    {

    printf("Preferem LUTA: %d\n", quantidades[0]);
    printf("Preferem AVENTURA: %d\n", quantidades[1]);
    printf("Preferem ESTRATEGIA: %d\n", quantidades[2]);
    printf("Preferem ESPORTE: %d\n", quantidades[3]);
    printf("Preferem RPG: %d\n", quantidades[4]);

}