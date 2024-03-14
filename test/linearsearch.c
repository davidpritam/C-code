#include<stdio.h>
int main()
{
    int i,n,ser;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the elements");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter the no you want to search\n");
    scanf("%d",&ser);
    for(int i=0;i<n;i++)
    {
        if(ser==arr[i])
        {
            printf("The item is at index %d",i);
        }
    }
    return 0;
}