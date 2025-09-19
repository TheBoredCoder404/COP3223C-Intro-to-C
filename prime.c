#include <stdio.h>
int main(){
    printf("What number would you like to check is prime?\n");
    int number;
    int check = 1;
    scanf("%d",&number);
    if(number == 1){
        printf("%d is not a prime number!",number);
    }else{
        for(int i=2;i<number;i++){
        if((number % i) == 0){
            check = 0;
            break;
        }
    }
    if(check == 1){
        printf("%d is a prime number!",number);
    }else if(check == 0){
        printf("%d is not a prime number!",number);
    }
    }
    return 0;
}