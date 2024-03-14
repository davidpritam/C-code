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
        }else if(cp>sp){
            printf("loss");
        } else{
            printf("there is no loss no profit");
        }return 0;
}