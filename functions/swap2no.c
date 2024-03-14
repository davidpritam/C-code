#include<stdio.h>
int main(){
    int n;
     printf("enter value of n ");
    scanf("%d",&n);
    int r;
        printf("enter value of r ");
    scanf("%d",&r);
    int temp;
    temp=n;
    n=r;
    r=temp;
    printf("the value of n is %d \n ",n);
    printf("the value of r is %d  ",r);
    return 0;
}