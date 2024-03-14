#include<stdio.h>
int main(){
    int a;
    printf("enter a no ");
    scanf("%d",&a);
    if(a%5==0 && a%3==0){
        printf("it is divisible by both 5 and 3");
    }else{
        printf("it is not divisible by both");
    }return 0;
}