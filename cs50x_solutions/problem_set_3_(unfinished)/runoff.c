#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max voters and candidates.
#define MAX_VOTERS 100
#define MAX_CANDIDATES 9

// preferences[i][j] is jth preference for voter i.
int preferences[MAX_VOTERS][MAX_CANDIDATES]; // 2 dimensional array.

// Candidates have name, vote count, eliminated status.
typedef struct
{
    string name;
    int votes;
    bool eliminated;
}
candidate;

// Array of candidates.
candidate candidates[MAX_CANDIDATES];

// Numbers of voters and candidates.
int voter_count;
int candidate_count;

// Function prototypes.
bool vote(int voter, int rank, string name);
void tabulate(void);
bool print_winner(void);
int find_min(void);
bool is_tie(int min);
void eliminate(int min);

int main(int argc, string argv[])
{
    // Check for invalid usage.
    if (argc < 2)
    {
        printf("Usage: runoff [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates.
    candidate_count = argc - 1;
    if (candidate_count > MAX_CANDIDATES)
    {
        printf("Maximum number of candidates is %i\n", MAX_CANDIDATES);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++) // This sets everything in the array to default to begin with.
    {
        candidates[i].name = argv[i + 1]; // Assigns the second (not ./runoff) as a name to the array.
        candidates[i].votes = 0; // It is set to 0 to start with.
        candidates[i].eliminated = false; // False to start with, meaning not eliminated (later needs to eliminate).
    } // It's going through each candidate e.g. Alice - 0, Bob - 1, Charlie - 2.

    voter_count = get_int("Number of voters: "); // Put in number of voters here.
    if (voter_count > MAX_VOTERS)
    {
        printf("Maximum number of voters is %i\n", MAX_VOTERS);
        return 3;
    }

    // Keep querying for votes.
    for (int i = 0; i < voter_count; i++) // It will iterate for however many people voted.
    {

        // Query for each rank.
        for (int j = 0; j < candidate_count; j++) // It will also iterate how many candidates there were.
        {
            string name = get_string("Rank %i: ", j + 1); // It displays 1 instead of 0, 1, 2 here (3 ranks).

            // Record vote, unless it's invalid.
            if (!vote(i, j, name)) // It will end the program if any wrong names are entered.
            {
                printf("Invalid vote.\n");
                return 4;
            }
        }

        printf("\n");
    }

    // Nothing is happening with only the vote function filled, it is stuck in input here.

    // Keep holding runoffs until winner exists.
    while (true) // Loop is started here automatically until false.
    {
        // Calculate votes given remaining candidates.
        tabulate();

        // Check if election has been won.
        bool won = print_winner(); // If this condition is true.
        if (won)
        {
            break; // It will break out of this loop.
        }

        // Eliminate last-place candidates.
        int min = find_min(); // This just finds the one with the least votes.
        bool tie = is_tie(min); // This puts into tie if it is true or false.

        // If tie, everyone wins.
        if (tie)
        {
            for (int i = 0; i < candidate_count; i++)
            {
                if (!candidates[i].eliminated)
                {
                    printf("%s\n", candidates[i].name);
                }
            }
            break;
        }

        // Eliminate anyone with minimum number of votes.
        eliminate(min);

        // Reset vote counts back to zero.
        for (int i = 0; i < candidate_count; i++)
        {
            candidates[i].votes = 0;
        }
    }
    return 0;
}

// Record preference if vote is valid.
bool vote(int voter, int rank, string name) // That is the voter, figure out rank.
{ // The theory is you won't need voter count here hopefully. It should store correctly it below.
        // Query for each rank.
        for (int i = 0; i < candidate_count; i++) // It will also iterate how many candidates there were.
        {
            if (strcmp(candidates[i].name, name) == 0)
            {
                // For the first voter it is the first preference.
                // vote sets first preference for first voter.
                // then you should update the global preferences array to indicate that the voter
                // voter has that candidate as their rank preference (where 0 is the first preference,
                // 1 is the second preference, etc.).
                preferences[voter][rank] += i; // The voters and candidates go in the preferences array.
                // The first voters preference for the first candidate.
                // The candidate number goes in the first voters preference.
                // e.g. VOTER 1: Rank 1 - Bob, Rank 2 - Alice, Rank 3 - Charlie.
                // e.g. VOTER 2: Rank 1 - Alice, Rank 2 - Bob, Rank 3 - Charlie.
                // e.g. VOTER 3: Rank 1 - Charlie, Rank 2 - Bob, Rank 3 - Alice.
                // printf("Rank: %d\n", rank);

                // This does not work with Charlie for some reason...
                // printf("Preferences: %d\n", preferences[voter][rank]); // Keep this here for debugging reasons.
                // It is correctly storing the candidates value (0 - Alice, 1 - Bob, 2 - Charlie).
                return true;
            }
        }
    return false;
}

// Tabulate votes for non-eliminated candidates.
void tabulate(void)
{
    // Add one vote to the top rank for each voter here I think.
    // Somehow add one vote to the voters in every Rank 1 entry.

    for (int i = 0; i < voter_count; i++) // For the first voter, it will iterate for each candidate.
    {
        for (int j = 0; j < candidate_count; j++) // It will also iterate how many candidates there were.
        {

            if (candidates[j].eliminated == false) // If any of them are not eliminated, continue.
            {
                if (preferences[i][0] == 0) // remember candidates[i] // is the first.
                {
                    candidates[0].votes++;
                    break;
                }
                else if (preferences[i][0] == 1)
                {
                    candidates[1].votes++;
                    break;
                }
                else if (preferences[i][0] == 2)
                {
                    candidates[2].votes++;
                    break;
                }
                // It will skip to this condition below if the candidate is eliminated.
                } else if (candidates[j].eliminated == true) // If the first candidate for the first voter is true.
                {
                if (preferences[i][1] == 0) // remember candidates[i] // is the first.
                { // For the first voter at Rank 2 is Alice then add one to Alice.
                    candidates[0].votes++;
                    break;
            // If when looping, at position [0][0], for pref[0][1] is 0 and not eliminated
                    // If Alice has been eliminated, add one to Rank 2 for Voter 1, and if Rank 2 eliminated and one to Rank 3.
                }
                else if (preferences[i][1] == 1)
                {
                    candidates[1].votes++;
                    break;
                }
                else if (preferences[i][1] == 2)
                {
                    candidates[2].votes++;
                    break;
                }
            }
        }
    }
    // The above code is just adding 1 to everyone, at the moment no one is able to be eliminated.
    // If the number in Rank 1 is 0 - Alice, add one for each time it appears in Rank 1?
    return;
}

// Print the winner of the election, if there is one.
bool print_winner(void)
{
    unsigned int max = 0;
    for (int i = 0; i < candidate_count; i++) // This is repeating until it is false (no candidates left).
    {
        unsigned int totalVotes = 0; // A variable to keep track.
        totalVotes += candidates[i].votes; // For how many votes each candidate has from the candidate count.

        max += totalVotes;
        if (candidates[i].votes > candidates[i + 1].votes && candidates[i].votes > candidates[i + 2].votes)
        {
            printf("%s\n", candidates[i].name);
            return true;
        }
        if (candidates[i + 1].votes > candidates[i].votes && candidates[i + 1].votes > candidates[i + 2].votes)
        {
            printf("%s\n", candidates[i + 1].name);
            return true;
        }
        if (candidates[i + 2].votes > candidates[i].votes && candidates[i + 2].votes > candidates[i + 1].votes)
        {
            printf("%s\n", candidates[i + 2].name);
            return true;
        }
        if (candidates[i].votes == max / 2) return false;
    }
    return false;
}

// Return the minimum number of votes any remaining candidate has.
int find_min(void)
{
    unsigned int max = 0;
    for (int i = 0; i < voter_count; i++) // This is repeating until it is false (no candidates left).
    {
    for (int j = 0; j < candidate_count; j++) // This is repeating until it is false (no candidates left).
    {
        if (candidates[i].eliminated == true)
        {
            return 0;
        }
        unsigned int totalVotes = 0; // A variable to keep track.
        totalVotes += candidates[i].votes; // For how many votes each candidate has from the candidate count.

        max += totalVotes;
        if (candidates[i].votes < candidates[i + 1].votes && candidates[i].votes < candidates[i + 2].votes)
        {
            printf("%s\n", candidates[i].name);
            return true;
        }
        if (candidates[i + 1].votes < candidates[i].votes && candidates[i + 1].votes < candidates[i + 2].votes)
        {
            printf("%s\n", candidates[i + 1].name);
            return true;
        }
        if (candidates[i + 2].votes < candidates[i].votes && candidates[i + 2].votes < candidates[i + 1].votes)
        {
            printf("%s\n", candidates[i + 2].name);
            return true;
        }
    }
}
    return 0;
}

// Return true if the election is tied between all candidates, false otherwise.
bool is_tie(int min)
{
    for (int i = 0; i < candidate_count; i++) // It will also iterate how many candidates there were.
    {
         // The rest of the if statements compare if they were the same to see if they all tied or only two.
        if (candidates[i].votes == candidates[i + 1].votes && candidates[i + 2].votes == candidates[i + 1].votes)
        {
            printf("%s\n", candidates[i].name);
            printf("%s\n", candidates[i + 1].name);
            printf("%s\n", candidates[i + 2].name);
            return true;
        }
        if (candidates[i].votes == candidates[i + 1].votes) // First candidate and second were tied.
        {
            printf("%s\n%s\n", candidates[i].name, candidates[i + 1].name);
            return true;
        }
        if (candidates[i + 1].votes == candidates[i + 2].votes) // Second candidate and third were tied.
        {
            printf("%s\n%s\n", candidates[i + 1].name, candidates[i + 2].name);
            return true;
        }
        if (candidates[i + 2].votes == candidates[i].votes) // Third candidate and first were tied.
        {
            printf("%s\n%s\n", candidates[i + 2].name, candidates[i].name);
            return true;
        }
    }
    // The boolean value of candidates[i].eliminated will be set to true here
    return false;
}

// Eliminate the candidate (or candidates) in last place.
void eliminate(int min)
{
    unsigned int max = 0;
    for (int i = 0; i < candidate_count; i++) // This is repeating until it is false (no candidates left).
    {
        if (candidates[i].eliminated == true)
        {
            break;
        }
        unsigned int totalVotes = 0; // A variable to keep track.
        totalVotes += candidates[i].votes; // For how many votes each candidate has from the candidate count.

        max += totalVotes;
        if (candidates[i].votes < candidates[i + 1].votes && candidates[i].votes < candidates[i + 2].votes)
        {
            printf("%s\n", candidates[i].name);
            candidates[i].eliminated = true;
            return;
        }
        if (candidates[i + 1].votes < candidates[i].votes && candidates[i + 1].votes < candidates[i + 2].votes)
        {
            printf("%s\n", candidates[i + 1].name);
            candidates[i + 1].eliminated = true;
            return;
        }
        if (candidates[i + 2].votes < candidates[i].votes && candidates[i + 2].votes < candidates[i + 1].votes)
        {
            printf("%s\n", candidates[i + 2].name);
            candidates[i + 2].eliminated = true;
            return;
        }
    }
    return;
}
