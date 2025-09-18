#include <stdio.h>
#include <stdlib.h>
int main(){
    int move1;
    int move2;
    int move3;
    int move4;
    int move5;
    printf("Please enter 5 whole numbers\n");
    scanf("%d %d %d %d %d",&move1,&move2,&move3,&move4,&move5);
    int travelTotal = abs(move1)+abs(move2)+abs(move3)+abs(move4)+abs(move5);
    int startDistance = 0;
    startDistance = startDistance+move1;
    startDistance = startDistance+move2;
    startDistance = startDistance+move3;
    startDistance = startDistance+move4;
    startDistance = startDistance+move5;
    printf("The robot walked %d total units, and ended %d units from the start",travelTotal,startDistance);
    return 0;
}