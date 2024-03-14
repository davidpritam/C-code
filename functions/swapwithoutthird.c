#include<stdio.h>
int main(){
    int n;
     printf("enter n ");
    scanf("%d",&n);
    int r;
        printf("enter  r ");
    scanf("%d",&r);
    n=n+r;
    r=n-r;
    n=n-r;

   
    printf("the value of n is %d \n ",n);
    printf("the value of r is %d  ",r);
    return 0;
}