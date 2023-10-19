#include <stdio.h>
typedef struct Eleicoes_do_bairro
{
    int slate;
    int quantity_of_votes;
}slate;

void compute_votes(int n, int votes[n], int *most_voted, int *second_most_voted){
    slate SlateOne = {1, 0}, SlateTwo = {2, 0}, SlateThree = {3, 0}, SlateFour = {4, 0}, SlateFive = {5, 0};
    slate SlateSix = {6, 0}, SlateSeven = {7, 0}, SlateEight = {8, 0}, SlateNine = {9, 0}, SlateTen = {10, 0};
    
    for (int j = 0; j < n; j++)
    {
        switch (votes[j])
        {
        case 1:SlateOne.quantity_of_votes += 1;continue;
        case 2: SlateTwo.quantity_of_votes += 1;continue;
        case 3: SlateThree.quantity_of_votes += 1;continue;
        case 4: SlateFour.quantity_of_votes += 1;continue;
        case 5: SlateFive.quantity_of_votes += 1;continue;
        case 6: SlateSix.quantity_of_votes += 1;continue;
        case 7: SlateSeven.quantity_of_votes += 1;continue;
        case 8: SlateEight.quantity_of_votes += 1;continue;
        case 9: SlateNine.quantity_of_votes += 1;continue;
        case 10: SlateTen.quantity_of_votes += 1;continue;
        }
    }
    slate apuracao[10] = {SlateOne, SlateTwo, SlateThree, SlateFour, SlateFive, SlateSix, SlateSeven, SlateEight, SlateNine, SlateTen};
    
    for (int z = 0; z < 50; z++)
    {
        for (int h = 0; h < 9; h++)
        {
            if (apuracao[h].quantity_of_votes < apuracao[h + 1].quantity_of_votes)
            {
                slate temporaria = apuracao[h]; 
                apuracao[h] = apuracao[h + 1]; 
                apuracao[h + 1] = temporaria; 
            }
            
        }
    }
    *most_voted = apuracao[0].slate;
    *second_most_voted = apuracao[1].slate;
}
int main(){
    int n = 0;
    int most_voted = 0, second_most_voted = 0;
    scanf("%i", &n);
    int votes[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &votes[i]);
    }
    compute_votes(n, votes, &most_voted, &second_most_voted);
    printf("%i %i", most_voted, second_most_voted);
    return 0;
}
