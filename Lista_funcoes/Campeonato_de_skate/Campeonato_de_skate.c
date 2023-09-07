#include <stdio.h>

int definir_score(int a, int b, int c){
    int score_do_dia = 0;
    if (a == b || a == c)
    {
        score_do_dia = a;
    }
    else if (b == c)
    {
        score_do_dia = b;
    }
    else if (a < b && a > c || a < c && a > b)
    {
        score_do_dia = a;
    }
    else if (b < a && b > c || b < c && b > a)
    {
        score_do_dia = b;
    }
    else if (c < a && c > b || c < b && c > a)
    {
        score_do_dia = c;
    }
    return score_do_dia;
}
int main(){
    int s1, s2, s3, s4, s5, s6, s7, s8, s9, sb1, sb2, sb3, sb4, sb5, sb6, sb7, sb8, sb9;
    int score_dia_um;
    int score_dia_dois;
    int score_dia_tres;
    int score_skatista_um;
    int scoreB_dia_um;
    int scoreB_dia_dois;
    int scoreB_dia_tres;
    int score_skatista_dois;
    scanf("%i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i", &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8, &s9, &sb1, &sb2, &sb3, &sb4, &sb5, &sb6, &sb7, &sb8, &sb9);
    score_dia_um = definir_score(s1, s2, s3);
    score_dia_dois = definir_score(s4, s5, s6);
    score_dia_tres = definir_score(s7, s8, s9);
    score_skatista_um = definir_score(score_dia_um, score_dia_dois, score_dia_tres);
    scoreB_dia_um = definir_score(sb1, sb2, sb3);
    scoreB_dia_dois = definir_score(sb4, sb5, sb6);
    scoreB_dia_tres = definir_score(sb7, sb8, sb9);
    score_skatista_dois = definir_score(scoreB_dia_um, scoreB_dia_dois, scoreB_dia_tres);
    if (score_skatista_um > score_skatista_dois)
    {
        printf("A");
    }
    else if (score_skatista_dois > score_skatista_um)
    {
        printf("B");
    }
    else
    {
        printf("empate");
    }
    
    return 0;
}