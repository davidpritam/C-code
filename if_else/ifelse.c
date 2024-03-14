#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if(n%2==0){
        printf("Even number");
    }if(n%2!=0){
        printf("odd number");
    }return 0;
}