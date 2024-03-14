#include<stdio.h>
int main(){
    int a=5;
    int *n =&a;
    *n=6;
    
   
    printf("%d\n ", a);
    return 0;
} 