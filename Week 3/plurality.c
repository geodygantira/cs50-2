#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    char name[MAX];
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];
char name_voted[MAX];

// Number of candidates
int candidate_count;
int voter_count;
int winner;

// Function prototypes
bool vote(char name[]);
void print_winner(void);

int main(int argc, char argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name[i] = argv[i + 1];
        candidates[i].votes = 0;
    }

    printf("Number of voters: ");
    gets(voter_count);

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        printf("Vote: ");
        gets(name_voted[i]);
        bool vote(name_voted[i]);

        // Check for invalid vote
        if (!vote(name_voted[i]))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(char name[])
{
    // TODO
    //loop for every voter
    int i,j;
    for (i =0; i< voter_count; i++)
    {
        //using linear search to find the registered name
        for (j=0; j<candidate_count; j++)
        {
            if (candidates[j].name[j] == name_voted[i])
            {
                candidates[j].votes++;
                return true;
            }
        }
    }
    return false;

}

// Print the winner (or winners) of the election
void print_winner(void)
{
    int i;
    for (i=0; i < candidate_count; i++)
    {
        winner = candidates[i].votes;
        if (winner < candidates[i+1].votes)
        {
            winner = candidates[i+1].votes;
        }
    }
    printf("winner %i", winner);
    return;
}

