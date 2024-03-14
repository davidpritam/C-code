#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter 1st no ");
    scanf("%d",&a);
    printf("enter 2nd no ");
    scanf("%d",&b);
    printf("enter 3rd no ");
    scanf("%d",&c);
    printf("enter 4th no ");
    scanf("%d",&d);
    if(a>b && a>c && a>d){
        printf("greatest no is %d",a);
    }if(b>a && b>c && b>d){
        printf("greatest no is %d",b);}
if(c>a && c>b && c>d){
    printf("greatest no is %d",c);
}if(d>a && d>b && d>c){
    printf("greatest no is %d",d);
}return 0;}


