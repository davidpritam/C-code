#include<stdio.h>
int main(){
    int arr[5],sum=0;
    for(int i=0;i<=4;i++){
    printf("Enter the value of array");
    scanf("%d",&arr[i]);}

    for(int j=0;j<=4;j++){
        sum=sum+arr[j];
    }
    printf("The sum of array is %d",sum);
    return 0;
}