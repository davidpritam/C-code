#include<stdio.h>
int main(){
    int N;
    printf("enter a number");
    scanf("%d",&N);
    if(N%5==0){
        printf("it is divisible by 5");
    }else{
        printf("it is not divisible by 5");
    }return 0;
}