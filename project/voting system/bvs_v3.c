#include <stdio.h>
#include <string.h>

int main() {
    int admin = 1, candidate = 2, voter = 3;
    int inputUser;
    char icn[3][100] = {"Mahi", "Trump", "Khalifa"};
    int candidateCount = 3;
    int votes[3] = {1, 1245234, 89321};
    int i;
    int voterVoted = 0;

    printf("Who you are? Select from the list:\nAdmin = %d, Candidate = %d, Voter = %d\n", admin, candidate, voter);
    scanf("%d", &inputUser);
    getchar();

    // Admin section
    if (inputUser == admin) {
        printf("Hi Admin!\n");
        printf("Candidates:\n");
        for (i = 0; i < candidateCount; i++) {
            scanf("%99s", icn[i]);
            printf("%d. %s (Votes: %d)\n", i + 1, icn[i], votes[i]);
        }
    }
    // Candidate section
    else if (candidate == inputUser) {
        char name[100];
        int found = 0;
        printf("Hi Candidate!\n");
        printf("Enter your name to check your vote counts: ");
        fgets(name, 100, stdin);
        name[strcspn(name, "\n")] = 0;

        for (i = 0; i < candidateCount; i++) {
            if (strcmp(name, icn[i]) == 0) {
                found = 1;
                printf("Your votes counted: %d\n", votes[i]);
                if (votes[i] >= 5) {
                    printf("CHEERS!!\n");
                } else {
                    printf("We are sorry!!\n");
                }
                break;
            }
        }
        if (!found) {
            printf("database not found!\n");
        }
    }
    // Voter section
    else if (voter == inputUser) {
        if (voterVoted) {
            printf("You have already voted. Multiple voting is not allowed.\n");
            return 0;
        }
        printf("Hi Dear Voter!\n");
        printf("Here is the list of the Candidates below:\n");
        for (i = 0; i < candidateCount; i++) {
            printf("%d. %s\n", i + 1, icn[i]);
        }
        printf("Enter the number of the candidate from the list: ");
        int choice;
        scanf("%d", &choice);
        if (choice < 1 || choice > candidateCount) {
            printf("WRONG INPUT\n");
        } else {
            votes[choice - 1]++;
            voterVoted = 1;
            printf("Thank you for voting for %s!\n", icn[choice - 1]);
        }
    }
    // Invalid input
    else {
        printf("invalid choice");
    }
    return 0;
}