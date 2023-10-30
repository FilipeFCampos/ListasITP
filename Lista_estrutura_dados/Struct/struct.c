#include <stdio.h>
#include <ctype.h>

typedef struct {
    int matricula;
    char nome[50];
    int codigo_disciplina;
    float nota1;
    float nota2;
} Aluno;

void mediana(Aluno media);

int main(void) {
    char nome[50];
    int i;
    Aluno boletim;

    scanf("%d", &i);

    scanf("%d, %s , %d, %f , %f", &boletim.matricula, boletim.nome, &boletim.codigo_disciplina, &boletim.nota1, &boletim.nota2);

    boletim.nome[0] = toupper(boletim.nome[0]);

    printf("%s  , ", boletim.nome);
    mediana(boletim);
    

    return 0;
}


void mediana(Aluno media)   {
    float mediana = (media.nota1 + media.nota2 * 2.0) / 3.0;
    printf("média final = %.1f", mediana - 0.1);
}
