#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int number = (rand()%(100-0+1))+0;
    int guessed = 1;
    int count = 0;
    int guess;
    while(guessed = 1){
        count ++;
        printf("What is your guess?\n");
        scanf("%d",&guess);
        if(guess < number){
            printf("Too low!\n");
        }else if(guess > number){
            printf("Too high!\n");
        }else if(guess == number){
            guessed = 0;
            printf("Correct! It took you %d tries to guess the number %d",count,number);
            break;
        }
    }
    return 0;
}