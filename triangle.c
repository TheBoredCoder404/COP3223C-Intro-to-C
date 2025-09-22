#include <stdio.h>
int main(){
    printf("Enter a number:\n");
    int number;
    scanf("%d",&number);
    for(int i=0;i<number;i++){
        for(int j=1;j<=i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}