#include<stdio.h>
int multiple(int a,int b);
int main(){
    int a,b,c;
    printf("Enter the first no ");
    scanf("%d",&a);
    printf("Enter the second no");
    scanf("%d",&b);
    c=a*b;
    printf("The multiple of two no is %d",c);
}
int multiple(int a,int b){
    int r;
    r=a*b;
    return  r;
}