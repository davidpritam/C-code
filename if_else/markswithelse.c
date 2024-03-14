#include<stdio.h>
int main(){
    int n;
    printf("enter percentage ");
    scanf("%d",&n);
    //more than 80 % A grade
    //more than 60 % B grade
    //more than 40 % C grade
    //less than 40 % D grade
    if(n>=90){
        printf("A grade");
    }
    else if(n>80){
        printf("B grade");
    }
    else if(n>60){
        printf("C grade");
    }else{
        printf("D grade");
    }return 0;
}