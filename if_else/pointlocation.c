#include<stdio.h>
int main(){
    int x,y;
    printf("enter co-ordinates ");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0){
        printf("the point lies on origin");
    }else if(x==0){
        printf("lies on y axis ");
    }else if (y==0){
        printf("lies on x axis ");
    }else {
        printf("the points does not lies on x or y axis ");
    }return 0;
}