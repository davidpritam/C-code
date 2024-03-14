#include<stdio.h>
int main(){
    int a[10],n,i,pos,num;
    printf("Enter the size of array \n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    printf("the array after the giving elements is \n");
    for(i=0;i<n;i++){
        printf("%d  ",a[i]);
    }
    return 0;

}