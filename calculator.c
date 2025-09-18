#include <stdio.h>
int main(){
    printf("Please enter 2 numbers:\n");
    int a;
    int b;
    scanf("%d %d",&a,&b);
    printf("Which operation? 1 = Addition, 2 = Subtraction, 3 = Multiplication, 4 = Division:\n");
    int operation;
    scanf("%d",&operation);
    double ans;
    if(operation == 1){
        ans = (double)a+b;
    }else if(operation == 2){
        ans = (double)b-a;
    }else if(operation == 3){
        ans = (double)a*b;
    }else if(operation == 4){
        ans = (double)a/b;
    }
    printf("The answer is %.2lf",ans);
    return 0;
}