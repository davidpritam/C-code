#include<stdio.h>
int fact(int *x)
{
    int f=1;
    int i,num=*x;
    for(i=1;i<=num;i++)
    {
        f=f*i;

    }
        return f;
}
int main()
{
    int n;
    int d;
    printf("Enter the value of n");
    scanf("%d",&n);
    d=fact(&n);
    printf("%d",d);

}