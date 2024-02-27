#define _CRT_SECURE_NO_WARNINGS;
#include <stdlib.h>;
#include <stdio.h>;

int main()
{
    //z.1
    /*char firstName[30];
    printf("Enter your first name: \n");
    scanf("%s", firstName);
    printf("Hello %s", firstName);
    */

    //z.2
    /*int grades[2][5] = { {1,2,3,4,5}, {2,3,4,5,6} };
    int i;
    int sum1 = 0;
    int sum2 = 0;
    int length = sizeof(grades[0][1]) + 1;
    for (i = 0; i < 5; i++) {
        sum1 += grades[0][i];
        sum2 += grades[1][i];
    }
    printf("%d", sum1/length);
    printf("\n");
    printf("%d", sum2/length);*/

    //z.3
    /*int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int length = sizeof(array)/sizeof(array[0]);
    int i;
    int result = 1;
    for (i = 0; i < length; i++) {
        result = result*array[i];
    }
    printf("%d", result);*/

    //z.4
    /*int i;
    for (i = 0; i < 201; i++) {
        if (i%5==0) {
            printf("Foo \n");
        }
        else if (i % 7 == 0) {
            printf("Bar \n");
        }
        if (i % 5 == 0 && i % 7 == 0) {
            printf("FooBar \n");
        }
        else {
            printf("%d \n", i);
        }
    }*/

    //z.5
    /*int i;
    int sum = 0;
    int size;
    printf("Wpisz liczbe: \n");
    scanf("%d", &size);
    for (i = 1; i < size; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum = sum + i;
        }
    }
    printf("Suma wielokrotności to: %d", sum);*/
    //z.6
    /*int rounds[3] = { 0,1,2 };
    int score = 0;
    int opponentScore = 0;
    char fighters[3][10] = { "rock", "paper", "scissors" };
    char myMoves[3][10];
    int i;
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

    }*/


    return 0;

}


