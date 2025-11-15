#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void goodRemarks(int i);
void badRemarks(int i);
int playQuiz(int level, int range);
void levelOne();
void levelTwo();
void levelThree();
int welcomeMessage();

void goodRemarks(int i)
{
    if (i == 0 || i == 7 || i == 4){
        printf("Very Good\n");
    }
    if (i == 1 || i == 3 || i == 5){
        printf("Excellent\n");
    }
    if (i == 6 || i == 8){
        printf("Nice Work\n");
    }
    if (i == 9 || i == 2){
        printf("Keep up the good work!\n");
    }
}

void badRemarks(int i)
{
    if (i == 0 || i == 7 || i == 4){
        printf("No, Please try again\n");
    }
    if (i == 1 || i == 3 || i == 5){
        printf("Wrong, Try once more\n");
    }
    if (i == 6 || i == 8){
        printf("Don't give up!\n");
    }
    if (i == 9 || i == 2){
        printf("No, Keep trying\n");
    }
}


int playQuiz(int level, int range)
{
    int correctAns = 0, wrongAns = 0;
    float inputAns = 0.0, ans = 0.0;
    int random1, random2;

    if (level == 1){
        printf("\nWelcome to the easy level difficulty\n");
    }
    else if (level == 2){
        printf("\nWelcome to the medium level difficulty\n");
    }
    else if (level == 3){
        printf("\nWelcome to the hard level difficulty\n");
    }

    for (int i = 0; i < 10; i++){
        random1 = 1 + rand() % range;

        if (random1 > 1){
            random2 = 1 + rand() % (random1 - 1);
        }
        else{
            random2 = 1;
        }

        ans = (float)random1 / random2;

        printf("What is the answer of the %d / %d : ", random1, random2);
        scanf("%f", &inputAns);

        if (fabs(inputAns - ans) < 0.01){
            goodRemarks(i);
            correctAns++;
        }
        else{
            printf("Wrong Answer!\n");
            badRemarks(i);
            wrongAns++;
        }
    }

    printf("\nYou got %d correct and %d wrong.\n", correctAns, wrongAns);

    float percentage = (correctAns / 10.0) * 100;
    printf("Your score: %.1f%%\n", percentage);

    if (percentage >= 70.0){
        printf("You are ready to go for the next level\n");
        return 1;
    }
    else{
        printf("Please ask your teacher for the extra help\n");
        return 0; 
    }
}


void levelOne()
{
    int pass = playQuiz(1, 10);
    if (pass == 1){
        levelTwo();
    }
}

void levelTwo()
{
    int pass = playQuiz(2, 100);
    if (pass == 1){
        levelThree();
    }
}

void levelThree()
{
    int pass = playQuiz(3, 1000);
    if (pass == 1){
        printf("\nCongratulations! You have completed all levels successfully!\n");
    }
}


int welcomeMessage()
{
    int difficultyLevel = 0;

    printf("Hello! Welcome to the Arithmetic Quiz Center!\n");
    printf("Choose your difficulty level:\n");
    printf("1. Easy\n");
    printf("2. Medium\n");
    printf("3. Hard\n");

    while (difficultyLevel < 1 || difficultyLevel > 3) {
        printf("\nEnter your difficulty level (1-3): ");
        scanf("%d", &difficultyLevel);

        if (difficultyLevel < 1 || difficultyLevel > 3) {
            printf("Invalid input! Please enter 1, 2, or 3.\n");
        }
    }

    return difficultyLevel;
}


int main(void)
{
    srand(time(0));

    int difficultyLevel = welcomeMessage();

    if (difficultyLevel == 1)
        levelOne();
    else if (difficultyLevel == 2)
        levelTwo();
    else
        levelThree();

    return 0;
}
