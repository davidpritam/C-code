#include<stdio.h>
int main(){
    int arr[4];
    int sum=0;
    for(int i=0;i<=3;i++){
        printf("Enter the value of array: ");
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<=3;j++){
        sum=sum+arr[j];
    }
    printf("the sum of given array is %d",sum);
    return 0;
}