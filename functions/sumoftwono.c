#include<stdio.h>
int main(){
    int sum(int a,int b){
    int s;
    s=a+b;
    return s;
}
    int x,y;
    printf("Enter the value of x,y :");
    scanf("%d%d",&x,&y);
    int total;
    total=sum(x,y);
    printf("%d",total);
    return 0;
}


