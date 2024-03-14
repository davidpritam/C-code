#include<stdio.h>
int main(){
    int arr[5],x=5;
    int count=0;
    for(int i=0;i<=4;i++){
        printf("Enter the value of elements ");
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<=4;j++){
      
        if(arr[j]>x)
        count++;
        }
        printf("%d",count);

    return 0;
    }
