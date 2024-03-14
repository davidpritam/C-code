#include<stdio.h>
int main(){
    int arr[4],max=arr[0];
    for(int i=0;i<=3;i++){
        printf("Enter the value of elements");
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<=3;j++){
        if(max<arr[j])
        max=arr[j];
    }
    printf("The max value is %d",max);
    return 0;
}