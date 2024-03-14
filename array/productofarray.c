#include<stdio.h>
int main(){
    int multi[5],n=1;
    for(int i=0;i<=4;i++){
        printf("Enter the value of array");
        scanf("%d",&multi[i]);
    }
    for(int j=0;j<=4;j++){
        n=n*multi[j];
    }
    printf("The multiply of array is %d",n);
    return 0;
}