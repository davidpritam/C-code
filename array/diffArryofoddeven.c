#include<stdio.h>
int main(){
    int arr[5];
    int sumOdd=0;
    int sumEven=0;
    for(int i=0;i<=4;i++){
        printf("Enter the value of elements ");
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<=4;j++){
        if(j%2==0)
        sumEven=sumEven+arr[j];
        else 
        sumOdd=sumOdd+arr[j];
    }int result=sumEven-sumOdd;
    printf("%d",result);
    return 0;
}