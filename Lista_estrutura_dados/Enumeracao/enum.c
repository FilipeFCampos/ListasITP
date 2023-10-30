#include <stdio.h>
#include <string.h>

//Estrutura de dados
typedef enum {

    BRANCO,
    AMARGO,
    AO_LEITE,
    COM_CASTANHAS

}   TipoChocolates;

typedef struct {

    char nome[50];
    float peso, preco;
    TipoChocolates tipo;

}   Chocolate;

//Funções
int definir_tipo(char type[]);

void quantidades(Chocolate choco[], int x);

void comparar_precos(Chocolate choco[], int x);

//Main
int main(void)  {

    char type[14];
    int x;
    scanf("%d", &x);
    Chocolate choco[x];

    for (int i = 0; i < x; i++) {
        scanf("%s", choco[i].nome);
        scanf("%f", &choco[i].peso);
        scanf("%f", &choco[i].preco);
        scanf("%s", type);
        choco[i].tipo = definir_tipo(type);
    }

    quantidades(choco, x);
    comparar_precos(choco, x);

    return 0;
}


void quantidades(Chocolate choco[], int x)  {
    int quantidade[4] = {};

    for (int i = 0; i < x; i++) {
        if (choco[i].tipo == BRANCO)    {
            quantidade[0]++;
        }
        else if (choco[i].tipo == AMARGO)    {
            quantidade[1]++;
        }
        else if (choco[i].tipo == AO_LEITE)    {
            quantidade[2]++;
        }
        else if (choco[i].tipo == COM_CASTANHAS)    {
            quantidade[3]++;
        }
    }

    printf("Total de chocolates BRANCO: %d\n", quantidade[0]);
    printf("Total de chocolates AMARGO: %d\n", quantidade[1]);
    printf("Total de chocolates AO_LEITE: %d\n", quantidade[2]);
    printf("Total de chocolates COM_CASTANHAS: %d\n", quantidade[3]);
}


void comparar_precos(Chocolate choco[], int x)  {

    float maior = 0;
    char mais_caro[50] = {}, mais_barato[50] = {};

    for (int i = 0; i < x; i++) {
        if (choco[i].preco > maior)    {
            maior = choco[i].preco;
            strcpy(mais_caro, choco[i].nome);
        } 

    }

    float menor = maior;
    strcpy(mais_barato, mais_caro);

    for (int i = 0; i < x; i++) {
        if (choco[i].preco < menor)    {
            menor = choco[i].preco;
            strcpy(mais_barato, choco[i].nome);
        } 

    }

    printf("Chocolate mais caro: %s - R$%.2f\n", mais_caro, maior);
    printf("Chocolate mais barato: %s - R$%.2f", mais_barato, menor);

}


int definir_tipo(char type[])  {
    if (strcmp(type, "BRANCO") == 0)   {
        return 0;
    }
    if (strcmp(type, "AMARGO") == 0)   {
        return 1;
    }
    if (strcmp(type, "AO_LEITE") == 0)   {
        return 2;
    }
    if (strcmp(type, "COM_CASTANHAS") == 0)   {
        return 3;
    }

    return 4;
}