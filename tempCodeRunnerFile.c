#include<stdio.h>
int Binarysearch(int lb, int ub,int a,int item)
{
int mid=(lb+ub)/2;
if (a[mid]==item)
return mid;
else if(item>a[mid])
Binarysearch(lb,mid-1,a,item);
else
binarysearch(lb,mid-1,a,item);
}
int main(){
    int i,n,a[10],item,pos;
    printf("enter no of elenents\n");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    pos=binarysearch(0,n-1,a,item);
    printf("item is %d",pos);
}


