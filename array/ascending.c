#include<stdio.h>
int main()
{
    int i,j,n,a[100],temp;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter elements \n");
        scanf("%d",&a[i]);
    }
   
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}