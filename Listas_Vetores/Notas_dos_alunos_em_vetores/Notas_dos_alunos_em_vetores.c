#include <stdio.h>

int main(){
    int u = 1;
    int alunos = 0;
    scanf("%i", &alunos);
    alunos += 1;
    int chamada_alunos[alunos];
    double lista_notas_alunos[alunos];
    for (int i = 1; i < alunos + 1; i++)
    {
        scanf("%i - %lf", &chamada_alunos[i], &lista_notas_alunos[i]);
    }
    printf("Aprovados:");
    for (int j = 1; j < alunos; j++)
    {
        if (lista_notas_alunos[j] >= 7.0 && u == 1)
        {
            printf(" %i (%.1lf)", chamada_alunos[j], lista_notas_alunos[j]);
            u += 1;
        }
        else if (lista_notas_alunos[j] >= 7.0)
        {
            printf(", %i (%.1lf)", chamada_alunos[j], lista_notas_alunos[j]);
        }
        else
        {
            continue;
        }
        
    }
    u = 1;
    printf("\nRecuperação:");
    for (int l = 1; l < alunos; l++)
    {
        if (lista_notas_alunos[l] >= 5.0 && lista_notas_alunos[l] < 7.0 && u == 1)
        {
            printf(" %i (%.1lf)", chamada_alunos[l], lista_notas_alunos[l]);
            u += 1;
        }
        else if (lista_notas_alunos[l] >= 5.0 && lista_notas_alunos[l] < 7.0)
        {
            printf(", %i (%.1lf)", chamada_alunos[l], lista_notas_alunos[l]);
        }
        else
        {
            continue;
        }
    }
    u = 1;
    printf("\nReprovados:");
    for (int a = 1; a < alunos; a++)
    {
        if (lista_notas_alunos[a] < 5.0 && u == 1)
        {
            printf(" %i (%.1lf)", chamada_alunos[a], lista_notas_alunos[a]);
            u += 1;
        }
        else if (lista_notas_alunos[a] < 5.0)
        {
            printf(", %i (%.1lf)", chamada_alunos[a], lista_notas_alunos[a]);
        }
        else
        {
            continue;
        }
    }


    return 0;
}