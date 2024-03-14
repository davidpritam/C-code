#include<stdio.h>
int main(){
    int arr[4];
    for(int i=0;i<=3;i++){
        printf("Enter the value of elements ");
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<=3;j++){
        if(j%2!=0)
        arr[j]=arr[j]*2;
        else arr[j]=arr[j]+10;
    }
    for(int j=0;j<=3;j++)
    printf("%d  ",arr[j]);
    return 0;
}