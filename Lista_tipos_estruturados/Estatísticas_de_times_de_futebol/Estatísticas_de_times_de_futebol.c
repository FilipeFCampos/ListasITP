#include <stdio.h>
typedef struct times_de_futebol
{
    char nome[50];
    int gols_feitos;
    int gols_sofridos;
}times;
void organizar(int n, times estatisticas[n]){
    times temporario;
    for (int t = 0; t < 25; t++)
    {
        for (int h = 0; h < n - 1; h++)
        {
            if (estatisticas[h].gols_feitos < estatisticas[h + 1].gols_feitos)
            {
                temporario = estatisticas[h]; 
                estatisticas[h] = estatisticas[h + 1]; 
                estatisticas[h + 1] = temporario; 
            }
            
        }
    }
    for (int a = 0; a < n; a++)
    {
        printf("%i - %sGols marcados: %i\nGols sofridos: %i\n", (a + 1), estatisticas[a].nome, estatisticas[a].gols_feitos, estatisticas[a].gols_sofridos);
    }
}
int main(){
    int n = 0;
    scanf("%i", &n);
    times estatisticas[n];
    for (int i = 0; i < n; i++)
    {
        getchar();
        fgets(estatisticas[i].nome, 49, stdin);
        scanf("%i", &estatisticas[i].gols_feitos);
        scanf("%i", &estatisticas[i].gols_sofridos);
    }
    organizar(n, estatisticas);
    
    return 0;
}
