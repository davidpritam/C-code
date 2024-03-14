#include<stdio.h>
int main(){
    int sp;
    printf("enter sp ");
    scanf("%d",&sp);
    int cp;
    printf("enter cp ");
    scanf("%d",&cp);
    if(sp>cp){
        printf("profit");
    }if(cp>sp){
        printf("loss");
    }if(cp==sp){
        printf("there is no loss nor profit");
    }return 0;
}