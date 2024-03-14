#include<stdio.h>
int main(){
    int arr[4],min=arr[0];
    for(int i=0;i<=3;i++){
        printf("Enter the value of elements ");
        scanf("%d",&arr[i]);}
            for(int j=0;j<=3;j++){
                if(min>arr[j])
                min=arr[j];
            }
            printf("The minimum value is %d",min);
    return 0;
}