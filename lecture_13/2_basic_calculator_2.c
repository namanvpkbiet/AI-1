#include<stdio.h>
int main(){
    // basic calculator by character/symbol
    printf("Enter the two number:\n");
    int a,b;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    printf("For Addition choose +\n");
    printf("For Subtraction choose -\n");
    printf("For Multiplication choose *\n");
    printf("For Division choose /\n");
    printf("Enter the choice:\n");
    char ch;
    scanf(" %c",&ch);
    switch(ch){
        case '+':
            printf("Addition is %d\n",a+b);
            break;
        case '-':
            printf("Subtraction is %d\n",a-b);
            break;
        case '*':
            printf("Multiplication is %d\n",a*b);
            break;
        case '/':
            printf("Division is %d\n",a/b);
            break;
        default:
            printf("Please select the above options\n");
    }
    return 0;
}