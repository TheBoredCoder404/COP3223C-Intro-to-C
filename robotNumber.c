#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    printf("What do you want your secret number to be?\n");
    int secret;
    scanf("%d",&secret);
    srand(time(0));
    int check = 1;
    int min = 0;
    int max = 100;
    int current;
    int result;
    int count;
    while(check == 1){
        count++;
        current = (rand()%(max-min+1))+min;
        printf("My guess is %d, how did I do? 1=Correct, 2=Too High, 3=Too Low\n",current);
        scanf("%d",&result);
        if(result == 1){
            printf("I took %d tries to guess your number which is %d!",count,secret);
            check = 0;
            break;
        }else if(result == 2){
            max = current-1;
        }else if(result == 3){
            min = current+1;
        }  
    }
    return 0;
}