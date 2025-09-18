#include <stdio.h>
int main(){
    printf("How many coins do you have (quarters, dimes, nickels, pennies)?\n");
    double quarters;
    double dimes;
    double nickels;
    double pennies;
    scanf("%lf %lf %lf %lf",&quarters,&dimes,&nickels,&pennies);
    quarters = quarters*0.25;
    dimes = dimes*0.10;
    nickels = nickels*0.05;
    pennies = pennies*0.01;
    double total = quarters+dimes+nickels+pennies;
    printf("You have this many dollars: %.2lf",total);
    return 0;
}