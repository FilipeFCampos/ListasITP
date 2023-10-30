#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main(void) {
    
    char frase[61];

    fgets(frase, sizeof(frase), stdin);


    frase[0] = toupper(frase[0]);

    for (int i = 1; i < strlen(frase); i++) {
        
        if (frase[i - 1] == ' ') {
            frase[i] = toupper(frase[i]);
        }
        
        else {
            frase[i] = tolower(frase[i]);
        }
        
    }

    printf("%s", frase);


    return 0;
}

