#include <stdio.h>
#include <string.h>
int estadentro(char letra, char padrao[50], int tamanhopadrao){
    char* substring;
    char letras[3] = {0};
    letras[0] = letra;
    substring = strstr(padrao, letras);
    if (substring == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(){
    int dentro = 0;
    char seq[50] = {0};
    int falhou = 0;
    int percorredor = 0;
    int limite = 0;
    int contador = 0;
    fgets(seq, 49, stdin);
    char padrao[50] = {0};
    fgets(padrao, 49, stdin);
    int tamanhoseq = strlen(seq);
    int tamanhopadrao = strlen(padrao);
    for (int i = 0; i < tamanhoseq; i++)
    {
        dentro = 0;
        for (int j = i; j < tamanhoseq; j++){
            falhou = 0;
            if (seq[j] == padrao[limite])
            {
                printf("%c ", seq[j]);
                limite += 1;
                if (limite == tamanhopadrao)
                {
                    break;
                }
                else
                {
                    continue;
                }
            }
            else
            {
                dentro = estadentro(seq[j], padrao, tamanhopadrao);
                if (dentro == 1)
                {
                percorredor = j;
                }
                printf("%c não\n", seq[j]);
                falhou += 1;
                limite = 0; 
                break;
            }
        }
        if (dentro == 1)
        {
            i = percorredor;
            continue;
        }
        if (falhou == 0 && limite == tamanhopadrao)
        {
            printf("sim\n");
            printf("Achei o padrão no índice %i", i);
            break;
        }
        else if (percorredor == ((tamanhoseq / 2)) && falhou != 0)
        {
            printf("Não achei o padrão");
            break;
        }
        percorredor += 1;
    }
    return 0;
}
