#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a\n");
    scanf("%d",&a);
      
    printf("Enter the value of b\n");
    scanf("%d",&b);
int temp=a;
a=b;
b=temp;
printf("the value of a:%d",a);
printf("\nthe value of b:%d",b);

return 0;
}