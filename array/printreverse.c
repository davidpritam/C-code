#include<stdio.h>
int main(){
    int arr[4];
    // printf("enter the value of data");
    // scanf("%d",&n);
    for(int i=0;i<=3;i++){
        printf("Enter the value of data:");
        scanf("%d",&arr[i]);
    }
    for(int i=3;i>=0;i--){
        printf("%d",arr[i]);
    }
    return 0;
}