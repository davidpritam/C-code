#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            int d=a+64;
            char ch=(char)d;
            printf("%c",d);
            a++;
        }
        printf("\n");
    }return 0;
}