#include<stdio.h>
int main(){
    int a;
    printf("enter a number ");
    scanf("%d",&a);
    if(a%5==0 || a%3==0){
      if(a%15!=0){
        printf("the no is divisible by 5 and 3 but not by 15");
      }else{
        printf("it is divisible by 15");
      }}else{
        printf("it is not divisible by 3 and 5");
      }
    return 0;
}