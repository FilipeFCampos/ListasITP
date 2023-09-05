#include <stdio.h>
int indentifica_lesma(int velocidade){
    if (velocidade >= 20)
    {
        return 2;
    }
    else if (velocidade >= 10 && velocidade< 20)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int main(){
    int N;
    int cm_por_hora;
    int level3, level2;
    level3 = 0;
    level2 = 0;
    int estado_lesma = 0;
    scanf("%i", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%i", &cm_por_hora);
        estado_lesma = indentifica_lesma(cm_por_hora);
        if ( estado_lesma == 2)
        {
            level3 += 1;
        }
        else if (estado_lesma == 1)
        {
            level2 += 1;
        }
    }
    if (level3 > 0)
    {
        printf("Level 3");
    }
    else if (level3 == 0 && level2 > 0)
    {
        printf("Level 2");
    }
    else
    {
        printf("Level 1");
    }
    
    return 0;
}