#include <cs50.h> // Gets the header file with the preprocessor.
#include <stdio.h>
#include <string.h>
#include <math.h>

// Defines the max number of candidates. Constants. Uppercase.
#define MAX 9

// Candidates have name and vote count.
typedef struct // Not meant to use typedef and struct (redundant?).
{
    string name; // Member of the struct.
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);

// Notes:
// It takes the arguments of candidates up to 9 no more.
// and the more the votes for the candidate, they are the winner.
// Alice, Bob and Charlie.
// Input the candidates first, then how many people are going to vote,
// then input who you are voting for, so 5 voters it will list 5 voters,
// who in order type in the candidate (guessing a wrong candidate name returns false?).
// Here I'm guessing somehow get the maximum number of votes and print off whoever has the most.
// Though this returns nothing its a void one so it should be straight forward.
// Print the name of the most votes.
// Add to that candidate 1 vote.
// Add the votes to the name somehow.

int main(int argc, string argv[])
{
    // Check for invalid usage.
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates.
    candidate_count = argc - 1; // Needs to be filled. Could be discluding "./plurality" from - 1.
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2; // Works with 1 as well here.
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1]; // Putting the names into it.
        candidates[i].votes = 0; // Putting 0 into every vote for each candidate.
    }

    int voter_count = get_int("Number of voters: ");

    // Loop over all voters.
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote.
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election.
    print_winner();
}

// Update vote totals given a new vote.
bool vote(string name)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if (strcmp(candidates[i].name, name) == 0)
        {
            // Add 1 vote to each respective name.
            candidates[i].votes++;
            return true;
        }
    }
    return false;
}

// Print the winner (or winners) of the election.
void print_winner(void)
{
    unsigned int max = 0;
    for (int i = 0; i < candidate_count; i++) // This is repeating until it is false (no candidates left).
    {
        unsigned int totalVotes = 0; // A variable to keep track.
        totalVotes += candidates[i].votes; // For how many votes each candidate has from the candidate count.
        //printf("%s: %d\n", candidates[i].name, totalVotes); // It will print off each vote the total of each candidate.
        
        max += totalVotes;
        //printf("%d\n", max);
        // Puts the first candidate's vote into totalVotes and then prints it off,
        // it does this until false so there were three candidates,
        // so far it will print off each of their vote in an integer.
        
        // The following if statements compare the votes to see which Alice, Bob or Charlie was higher.
        if (candidates[i].votes > candidates[i + 1].votes && candidates[i].votes > candidates[i + 2].votes)
        {
            printf("%s\n", candidates[i].name);
            return;
        }
        if (candidates[i + 1].votes > candidates[i].votes && candidates[i + 1].votes > candidates[i + 2].votes)
        {
            printf("%s\n", candidates[i + 1].name);
            return;
        }
        if (candidates[i + 2].votes > candidates[i].votes && candidates[i + 2].votes > candidates[i + 1].votes)
        {
            printf("%s\n", candidates[i + 2].name);
            return;
        }
        // The rest of the if statements compare if they were the same to see if they all tied or only two.
        if (candidates[i].votes == candidates[i + 1].votes && candidates[i + 2].votes == candidates[i + 1].votes)
        {
            printf("%s\n", candidates[i].name);
            printf("%s\n", candidates[i + 1].name);
            printf("%s\n", candidates[i + 2].name);
            return;
        }
        if (candidates[i].votes == candidates[i + 1].votes) // First candidate and second were tied.
        {
            printf("%s\n%s\n", candidates[i].name, candidates[i + 1].name);
            return;
        }
        if (candidates[i + 1].votes == candidates[i + 2].votes) // Second candidate and third were tied.
        {
            printf("%s\n%s\n", candidates[i + 1].name, candidates[i + 2].name);
            return;
        }
        if (candidates[i + 2].votes == candidates[i].votes) // Third candidate and first were tied.
        {
            printf("%s\n%s\n", candidates[i + 2].name, candidates[i].name);
            return;
        }
        // If the number of votes between each person is equal then tie, somehow.
        // get it to compare the votes between the names.
        // So Bob would get one vote and Alice would get one vote,
        // then you would need to track either of them.
        /*
        for (int j = 0; j < candidates[i].votes; j++)
        {
            max += candidates[i].votes;
        }
        */
        // You might want to try iterating over all of the votes, adding the maximum to a variable.

        // For now it only prints of the total of each vote,
        // I now need to figure out how to print the name of the ones that have tied,
        // and to print the name of the one with the most total votes.
    }
    // printf("\ntotal: %d\n", max);
}
