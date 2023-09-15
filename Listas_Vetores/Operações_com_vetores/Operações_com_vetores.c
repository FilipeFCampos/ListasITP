#include <stdio.h>

int main(){
    int vetor1[3] = {0};
    int vetor2[3] = {0};
    int vetor3[3] = {0};
    scanf("%i %i %i", &vetor1[0], &vetor1[1], &vetor1[2]);
    scanf("%i %i %i", &vetor2[0], &vetor2[1], &vetor2[2]);
    scanf("%i %i %i", &vetor3[0], &vetor3[1], &vetor3[2]);
    int op[3] = {0};
    op[0] = (vetor1[0] + vetor2[0]) - (5 * vetor3[0]);
    op[1] = vetor1[1] + vetor2[1] - 5 * vetor3[1];
    op[2] = vetor1[2] + vetor2[2] - 5 * vetor3[2];
    printf("A = [%i,%i,%i]", op[0], op[1], op[2]);
    return 0;
}
