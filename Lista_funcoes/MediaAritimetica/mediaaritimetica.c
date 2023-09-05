#include <stdio.h>
float calcula_media(char tipo, float n1, float n2, float n3){
    float media;
    if (tipo == 'A')
    {
        media = (n1 + n2 + n3) / 3;
        return media;
    }
    else
    {
        media = ((n1 * 4)+(n2*5)+(n3*6))/ 15;
        return media;
    }
    
}
int main(){
    char tipo;
    float n1;
    float n2;
    float n3;
    scanf("%c", &tipo);
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    printf("Média %.2f", calcula_media(tipo,n1,n2,n3));
    return 0;
}