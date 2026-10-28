#include<stdio.h>
int main(){
    int n;
    printf("Enter the number n:\n");
    scanf("%d",&n);
    _Bool isprime=1;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            isprime=0;
            break;
        }
    }
    if(isprime==1){
        printf("Number is prime\n");
    }
    else{
        printf("Number is not prime\n");
    }
    return 0;
}