#include <stdio.h>
int main(){
    printf("How many hours?\n");
    int hours;
    scanf("%d",&hours);
    int laps = hours*3;
    printf("Ash will run %d laps",laps);
    return 0;
}