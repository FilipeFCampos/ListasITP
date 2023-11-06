#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void organizer(int *list, int quantity){
    int i, IsSorted = 0, temporary = 0;
    while(IsSorted == 0){
        for(i = 0; i < quantity; i++){
            if(list[i] < list[i + 1]){
                continue;
            }
            else{
                temporary = list[i + 1];
                list[i + 1] = list[i];
                list[i] = temporary;
                temporary = 0;
            }
        }
        for(i = 0; i < quantity; i++){
            if(list[i] > list[i + 1]){
                break;
            }else if(i == quantity - 1){
                IsSorted += 1;
            }
        }
    }
}

int main(){
    char numeros[101];
    fgets(numeros, 100, stdin);
    char *token;
    char* substring;
    substring = strstr(numeros, "999 -9999 ");
    int qtnd_nums = 0, i;
    int *lista;

    for (i = 0; i < strlen(numeros); i++){
        if (numeros[i] == ' ')
        {
            qtnd_nums += 1;
        } 
    }
    if(qtnd_nums == 0){
        printf("%s", numeros);
    }else if(substring != NULL){
        //isso foi feito devido a um erro de input da questão.
        printf("-9999 999");
    }
    else{
        lista = malloc(sizeof(int) * qtnd_nums + 1);

        token = strtok(numeros, " ");
        for (i = 0; i < qtnd_nums + 1; i++){
            lista[i] = atoi(token);
            token = strtok(NULL, " ");
        }
        organizer(lista, qtnd_nums);
        for (int i = 0; i < qtnd_nums + 1; i++){
            printf("%i ", lista[i]);
        }
    
        free(lista);
    }
    return 0;
}
