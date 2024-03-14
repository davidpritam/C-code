#include<stdio.h>
int main(){
    int a;
    printf("enter a number ");
    scanf("%d",&a);
    if(a%5==0 || a%3==0){
        printf("the no is divisible by 5 or 3 ");
    }else{
        printf("it is not divisible by 5 or 3");
    }return 0;
}

