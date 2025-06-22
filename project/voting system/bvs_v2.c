#include <stdio.h>
#include <string.h>

int main() {
    int admin = 1, candidate = 2, voter = 3;
    int inputUser;
    char icn[10][100] = {0}; // candidate names
    int votes[10] = {0};     // votes for each candidate
    int i, candidateCount = 0;

    printf("Who you are? Select from the list:\nAdmin = %d, Candidate = %d, Voter = %d\n", admin, candidate, voter);
    scanf("%d", &inputUser);

    // if admin entered into system
    if (inputUser == admin) {
        printf("Hi admin!\n");
        printf("Add candidate names (one word only):\n");
        for (i = 0; i < 10; i++) {
            scanf("%99s", icn[i]);
            if (strcmp(icn[i], "n") == 0) {
                break;
            }
            printf("%d. %s ADDED TO THE L\n(type n to stop process)\n", i + 1, icn[i]);
        }
        candidateCount = i;
    }

    // if candidate entered into system
    else if (candidate == inputUser) {
        char name[100];
        int found = 0;
        printf("Hi Candidate!\n");
        printf("Enter your name to check your vote counts: ");
        scanf("%99s", name);

        for (i = 0; i < 10; i++) {
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

    // if voter entered into system
    else if (voter == inputUser) {
        printf("Hi Dear Voter!\n");
        printf("Here is the list of the Candidates below:\n");
        for (i = 0; i < 10 && icn[i][0] != '\0' && strcmp(icn[i], "no") != 0; i++) {
            printf("%d. %s\n", i + 1, icn[i]);
        }
        printf("Enter number of the candidate from the list: ");
        int voteFor;
        scanf("%d", &voteFor);
        if (voteFor < 1 || voteFor > 10 || icn[voteFor - 1][0] == '\0' || strcmp(icn[voteFor - 1], "no") == 0) {
            printf("WRONG INPUT\n");
        } else {
            votes[voteFor - 1]++;
            printf("Thank you for voting!\n");
        }
    }

    // if ghost enter
    else {
        printf("invalid choice\n");
    }
    return 0;
}