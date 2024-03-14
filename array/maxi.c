#include<stdio.h>
int main(){
    int n,i,arr[10];
   printf("\nEnter the size of array");
   scanf("%d",&n);
   printf("\nEnter the elements of array");
   for(i=0;i<n;i++){
    scanf("%d",arr[i]);
   }
   int max=arr[0];
   for(i=1;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
   }
   printf("\nThe max is %d",max);
    return 0;
}