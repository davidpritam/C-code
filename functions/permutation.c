#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2; i<=x; i++){
        fact=fact*i;
    }return fact;
}
int main(){
    int n,r;
    printf("enter a value of n : ");
    scanf("%d",&n);
    printf("enter a value of r : ");
    scanf("%d",&r);
    int npr;
    npr=factorial(n)/factorial(n-r);
    printf("%d",npr);
    return 0;
}