#include <stdio.h>

int calcular_aposta(int altura, int largura, char cor, int corG, int corY, int corR){
    switch (cor)
    {
    case 'G': return (altura * (largura / 3)) * corG; break;
    case 'Y': return (altura * (largura / 3)) * corY; break;
    case 'R': return (altura * (largura / 3)) * corR; break;
    }
}

int main(){
    int larg = 0;
    int num_cor = 0;
    char cor = 'a';
    scanf("%i %i %c", &larg , &num_cor, &cor);
    int altura = (2 * (larg / 3));
    int matriz[altura][larg];
    int corG = num_cor + 1;
    int corY = num_cor + 2;
    int corR = num_cor + 3;
    int resposta = calcular_aposta(altura, larg, cor, corG, corY, corR);
    printf("%i", resposta);
    return 0;
}
