#include<stdio.h>
int main(){
    int arr[5],sm;
    sm=arr[0];
    for(int i=0;i<=4;i++){
        printf("Enter the value of elements ");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=4;i++){
        if(arr[i]<sm)
        sm=arr[i];
        }
        printf("smallest=%d ",sm);
    return 0;
    }
