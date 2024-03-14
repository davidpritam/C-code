#include<stdio.h>
    int add (int x,int y){
        int c;
        c=x+y;
    return c;}
    int main(){
    int a,b;
    printf("enter 1st no ");
    scanf("%d",&a);
     printf("enter 2nd  no ");
    scanf("%d",&b);
    int sum=add ( a,b);   
    printf(" sum is %d",sum);
    
    
    return 0;
}