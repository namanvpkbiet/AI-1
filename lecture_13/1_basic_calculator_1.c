#include<stdio.h>
int main(){
    // basic calculator by number
    printf("Enter the two number:\n");
    int a,b;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    printf("For Addition choose 1\n");
    printf("For Subtraction choose 2\n");
    printf("For Multiplication choose 3\n");
    printf("For Division choose 4\n");
    printf("Enter the choice:\n");
    int ch;
    scanf("%d",&ch);
    switch(ch){
        case 1:
            printf("Addition is %d\n",a+b);
            break;
        case 2:
            printf("Subtraction is %d\n",a-b);
            break;
        case 3:
            printf("Multiplication is %d\n",a*b);
            break;
        case 4:
            printf("Division is %d\n",a/b);
            break;
        default:
            printf("Please select the above options\n");
    }
    return 0;
}