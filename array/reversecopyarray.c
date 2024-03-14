#include<stdio.h>
int main(){
    int arr[4];
    int brr[4];
    for(int i=0;i<=3;i++){
        printf("Enter the value of elenments ");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=3;i++){
        brr[i]=arr[3-i];
        printf("%d  ",brr[i]);
    }

    return 0;
}