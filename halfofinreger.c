#include<stdio.h>
int main(){
    float x;
    printf("enter a decimal value :");
    scanf("%f",&x);
    int y;
    y=x;
    float z=x-y;
    printf("the value is %f",z);
    return 0;
}