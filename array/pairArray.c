#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int x=12;
    int resultsum=0;
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){
            if(arr[i]+arr[j]==x){

            resultsum++;
            printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    printf("%d",resultsum);
    return 0;
}