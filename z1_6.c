#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int score = 0;
    int opponentScore = 0;
    char fighters[3][10] = { "rock", "paper", "scissors" };
    while (opponentScore< 3 && score <3) {
        int chosenOption;
        printf("\nChoose your fighter:'rock' - 0,\n 'paper' - 1,\n 'scissors' - 2 \n");
        scanf("%d", &chosenOption);
        int opponentOption = rand() % (2 + 1 - 0) + 0;
        switch (chosenOption) {
            case 0:
                system("@cls||clear");
                if (fighters[opponentOption] == fighters[2]) {

                    score += 1;
                    printf("YOU %d:%d OPPONENT\n", score, opponentScore);
                }
                else {
                    opponentScore += 1;
                    printf("YOU %d:%d OPPONENT\n", score, opponentScore);
                }
                break;
            case 1:
                system("@cls||clear");
                if (fighters[opponentOption] == fighters[0]) {
                    score += 1;
                    printf("YOU %d:%d OPPONENT\n", score, opponentScore);
                }
                else {
                    opponentScore += 1;
                    printf("YOU %d:%d OPPONENT\n", score, opponentScore);
                }
                break;
            case 2:
                system("@cls||clear");
                if (fighters[opponentOption] == fighters[1]) {
                    score += 1;
                    printf("YOU %d:%d OPPONENT\n", score, opponentScore);
                }
                else {
                    opponentScore += 1;
                    printf("YOU %d:%d OPPONENT\n", score, opponentScore);
                }
                break;
        }

    }
    return 0;

}