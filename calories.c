#include <stdio.h>
int main(){
    printf("Foods:\n1 = Burger (350 calories)\n2 = Fries (365 calories)\n3 = Soda (250 calories)\n4 = Coffee (1 calorie)\n5 = Slice of Pizza (280 calories)\n");
    int calories = 0;
    int currentChoice = 0;
    while(currentChoice != -1){
        printf("What food would you like to eat?\n");
        scanf("%d",&currentChoice);
        switch(currentChoice){
            case 1:
                calories += 350;
                break;
            case 2:
                calories += 365;
                break;
            case 3:
                calories += 250;
                break;
            case 4:
                calories += 1;
                break;
            case 5:
                calories += 280;
                break;
        }
    }
    printf("Total Calories: %d",calories);
    return 0;
}