#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of rows and column:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            printf("%d",a);
            a=a+2;
        }printf("\n");
    }return 0;
    }