#include <stdio.h>
typedef struct Eleicoes_do_bairro_2
{
    int identifier;
    char party_name[50];
    int quantity_of_votes;
}Party;
int compute_votes(int num_votes,int votes[num_votes],int num_parties,Party parties[num_parties],Party *most_voted, Party *second_most_voted){
    for (int j = 0; j < num_votes; j++)
    {
        for (int y = 0; y < num_parties; y++)
        {
            if(votes[j] == parties[y].identifier){
                parties[y].quantity_of_votes += 1;
            }
            else{
                continue;
            }
        }
    }
    for (int z = 0; z < 50; z++)
    {
        for (int h = 0; h < (num_parties - 1); h++)
        {
            if (parties[h].quantity_of_votes < parties[h + 1].quantity_of_votes)
            {
                Party temporaria = parties[h]; 
                parties[h] = parties[h + 1]; 
                parties[h + 1] = temporaria; 
            }
            
        }
    }
    *most_voted = parties[0];
    *second_most_voted = parties[1];
}
int main(){
    int votos_validos = 0;
    int num_parties = 0, num_votes = 0;
    scanf("%i", &num_parties);
    double pMost = 0, pSMost = 0;
    Party most_voted = {0, "aaa", 0}, second_most_voted = {0, "aaa", 0};
    Party parties[num_parties];
    for (int i = 0; i < num_parties; i++)
    {
        scanf("%i %s", &parties[i].identifier, &parties[i].party_name);
        parties[i].quantity_of_votes = 0;
    }
    scanf("%i", &num_votes);
    int votes[num_votes];
    for (int c = 0; c < num_votes; c++)
    {
        scanf("%i", &votes[c]);
        for (int d = 0; d < num_parties; d++){
            if (votes[c] == parties[d].identifier)
            {
                votos_validos += 1;
            }
            else
            {
                continue;
            }
        } 
    }
    compute_votes(num_votes, votes, num_parties, parties, &most_voted, &second_most_voted);
    double botafogo = most_voted.quantity_of_votes * 100,vasco = votos_validos, fluminense = second_most_voted.quantity_of_votes * 100;
    pMost = (botafogo / vasco);
    pSMost = (fluminense / vasco);
    printf("VENCEDOR: %s (%i votos = %.2lf%%)\n", most_voted.party_name, most_voted.quantity_of_votes, pMost);
    printf("VICE: %s (%i votos = %.2lf%%)", second_most_voted.party_name, second_most_voted.quantity_of_votes, pSMost);
    return 0;
}
