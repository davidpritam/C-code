#include<stdio.h>
int main(){
    int x=5;
    int *j;
    j=&x;
    printf(" \t%d  %d  %d",j,&x,x);
    printf(" \n\t %d %d %d",*j,*&x,&j);
    return 0;
}