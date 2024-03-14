#include<stdio.h>
int main(){
    int cp;
    printf("enter cp ");
    scanf("%d",&cp);
    int sp;
    printf("enter sp ");
    scanf("%d",&sp);
    if(sp>cp){
        printf("profit");
    }else if(cp>sp){
        printf("loss ");
    }else{
        printf("no loss no profit");
    }return 0;
    
    
}