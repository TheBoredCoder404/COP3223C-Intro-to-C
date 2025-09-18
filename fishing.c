#include <stdio.h>
int main(){
    printf("Where do you want to fish? 1 = River, 2 = Ocean:\n");
    int location;
    scanf("%d",&location);
    printf("What bait do you want to use? 1 = Worm, 2 = Jig\n");
    int bait;
    scanf("%d",&bait);
    if(location == 1 && bait == 1){
        printf("You caught a Panfish!");
    }else if(location == 1 && bait ==2){
        printf("You caught a Salmon!");
    }else if(location == 2 && bait ==1){
        printf("You caught a Flounder!");
    }else if(location == 2 && bait ==2){
        printf("You caught a Grouper!");
    }
    return 0;
}