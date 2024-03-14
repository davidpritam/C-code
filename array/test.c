#include<stdio.h>
int main(){
    int i=0,n,arr[20];
    printf("Enter the no \n");
    scanf("%d",&n);
    printf("\nEnter the elements ");
    for(i=0;i<n;i++){
        //printf("\%d]",i);
        scanf("%d",arr[i]);
    }
    printf("\nThe elements in arrays are given below ");
    for(i=0;i<n;i++){
        printf("arr[%d]=%d",i,arr[i]);
    }
    return 0;
}