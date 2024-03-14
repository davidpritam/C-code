#include<stdio.h>
int main(){
    int l;
    printf("enter length ");
    scanf("%d",&l);
    int b;
    printf("enter breadth ");
    scanf("%d",&b);
    int area=l*b;
    int peri=2*(l+b);
    if(area>peri){
        printf("area is greater than perimeter ");
    }if(peri>area){
        printf("perimeter is greater than area ");}
        if(area==peri){
            printf("both are equal");
        }return 0;
    }
