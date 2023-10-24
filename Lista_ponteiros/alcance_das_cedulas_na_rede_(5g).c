#include <stdio.h>

void get_range(int n, int cells[n], int distance, int user){
    int counter = 0;
    int valid_cells[n];
    for (int z = 0; z < n; z++)
    {
        valid_cells[z] = 0;
    }
    for (int a = 0; a < n; a++)
    {
        if (cells[a] <= user)
        {
            if (user - cells[a] <= distance)
            {
                valid_cells[counter] = cells[a];
                counter += 1;
            } 
        }
        else if (cells[a] > user)
        {
            if (cells[a] - user <= distance)
            {
                valid_cells[counter] = cells[a];
                counter += 1;
            }
        }    
    }
    if (valid_cells[0] == 0)
    {
        printf("USUARIO DESCONECTADO");
    }
    else{
        for (int b = 0; b < counter; b++)
        {
            printf("%i ", valid_cells[b]);
        }
    }
}
int main(){
    int N = 0, D = 0, U = 0;
    scanf("%i %i %i", &N, &D, &U);
    int cells[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%i", &cells[i]);
    }
    get_range(N, cells, D, U);
    return 0;
}
