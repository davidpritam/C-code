#include<stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int i;
        for( i=1;i<=n;i=i+1){
        if (i%2!=0){
            printf("\n %d",i);
        }
        
    }return 0;
}