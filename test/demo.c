#include<stdio.h>
int *sum(int *x,int *y)
{
        int a=*x,b=*y;
        int *s;
        s=a+b;
        return (&s);
}
int main()
{
       int x,y;
       int *z;
       printf("Enter the value of x");
       scanf("%d",&x);
       printf("Enter the value of Y");
       scanf("%d",&y);
       printf("%d,%d",x,y);
       z=sum(&x,&y);
       printf("The sum is %d",z);
       return 0;
}