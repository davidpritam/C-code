#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[5],sn;
    for(int i=0;i<=4;i++){
        printf("Enter the elements ");
        scanf("%d",&arr[i]);
    }
    printf("Enter the no to be searched ");
    scanf("%d",&sn);
    for(int i=0;i<=4;i++){
        if(sn==arr[i]){
            printf("item is in %d",i);
            exit(0);
        }  }
        printf("No does not exists ");       
    return 0;
}