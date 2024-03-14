#include<stdio.h>
int add(int a,int b);

int add(int x,int y){
    int c;
    c=x+y;
    return c;
}
int main(){
    int a,b,c=0;
    printf("Enter the two no ");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("The sum is %d",c);
    return 0;
}

