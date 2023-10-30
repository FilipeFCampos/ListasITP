#include <stdio.h>
#include <ctype.h>
#include <string.h>

char placa[21];

int validacao();

int main(void) {


    fgets(placa, sizeof(placa), stdin);

    if (validacao(placa)) {
        printf("sim\n");
    } 
    else    {
        printf("não\n");
    }

    return 0;
}


int validacao() {
    
    if (strlen(placa) != 8) {
        return 0;
    }

    for (int i = 0; i < 3; i++) {
        if (!isupper(placa[i])) {
            return 0;
        }

    }

    if (placa[3] != '-')    {
        return 0;
    }


    for (int i = 4; i < 8; i++) {
        if (!isdigit(placa[i])) {
            return 0;
        }
            
    }


    return 1;
}
