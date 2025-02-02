#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int playerChoice, computerChoice;
    
    // Seed the random number generator
    srand(time(0));

    printf("Rock, Paper, Scissors Game\n");
    printf("Choose: 1. Rock  2. Paper  3. Scissors\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &playerChoice);

    // Generate computer's choice (1-3)
    computerChoice = rand() % 3 + 1;

    // Display choices
    char *choices[] = {"Rock", "Paper", "Scissors"};
    printf("You chose: %s\n", choices[playerChoice - 1]);
    printf("Computer chose: %s\n", choices[computerChoice - 1]);

    // Determine the winner
    if (playerChoice == computerChoice) {
        printf("It's a draw!\n");
    } else if ((playerChoice == 1 && computerChoice == 3) || 
               (playerChoice == 2 && computerChoice == 1) || 
               (playerChoice == 3 && computerChoice == 2)) {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }

    return 0;
}
