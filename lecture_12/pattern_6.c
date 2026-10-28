#include<stdio.h>
int main(){
    int n;
    printf("Enter the number n:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        // spaces print karni hai
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        // star print karne hai
        for(int j=1;j<=2*i-1;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}