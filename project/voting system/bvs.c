#include <stdio.h>
#include <string.h>

int main() {
    int admin = 1, candidate = 2, voter = 3;
    int inputUser;
    char icn[10][100];
    int i;
    int votes[10] = {0}; // Fixed: Added array to store votes for each candidate

    printf("Who you are? Select from the list:\nAdmin = %d, Candidate = %d, Voter = %d\n",admin, candidate, voter);
    scanf("%d",&inputUser);

    // if admin entered into system
    if(inputUser == admin) {
        printf("Hi admin!\n");
        printf("add candidate names(one word only): ");
        
        for(i = 0; i < 10 ;i++) {
            scanf("%99s", icn[i]);
            if(strcmp(icn[i], "n") == 0) {
                break;
            }
            printf("%d. %s ADDED TO THE LIST\n(type n to stop entering)\nEnter:", i+1, icn[i]);
        }
    }

    // if candidate entered into system

    else if(candidate == inputUser) {
        char name[100];
        int found = 0; // Fixed: Added flag to check if candidate is found
        printf("Hi Candidate!\n");
        printf("Enter your name to check your vote counts: ");
        scanf("%99s", name); // Fixed: Removed & from scanf for string

        for(i = 0; i < 10; i++) { // Fixed: Loop through all candidates
            if(strcmp(name, icn[i]) == 0) {
                found = 1;
                printf("Your votes counted: %d", votes[i]);
                if(votes[i] >= 5){
                    printf("CHEERS!!");
                } else {
                    printf("We are sorry!!");
                } 
                break;
            }
        }
        if(!found) {
            printf("database not found!");
        }
    }
    
    else if(voter == inputUser) {
        printf("hi voter saheb\n");
    } 
    else {
        printf("invalid choice");
    }
    return 0;
}