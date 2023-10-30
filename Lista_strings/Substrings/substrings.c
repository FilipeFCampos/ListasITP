#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)  {

    char stringA[40];
    char stringB[40];

    fgets(stringA, sizeof(stringA), stdin);
    fgets(stringB, sizeof(stringB), stdin);

    int contador;
    int posicoes[strlen(stringB)];

    for (int i = 0; i < strlen(stringA); i++)
        stringA[i] = tolower(stringA);
        
    for (int i = 0; i < strlen(stringB); i++)
        stringB[i] = tolower(stringB);

    for (int i = 0; i < strlen(stringB); i++)   {
        if (stringB[i] == stringA[i])   {
            
        }

    }



    return 0;
}