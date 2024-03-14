#include<stdio.h>
typedef struct student{
    int sl;
    int roll;
    char name[20];
    char course[10];
    float marks;
    long int ph;
}
st;
void main(){
    int i;
    st a[i];
    printf("enter the dataa\n");
    for(int i=0;i<5;i++)
    scanf("%d %d %s %s %f %ld ",&a[i].sl,&a[i].roll,a[i].name,a[i].course,&a[i].marks,&a[i].ph);
    printf("the record for five student are\n");
    for(int i=0;i<5;i++)
    printf("%d  %d  %s   %s  %f  %ld",a[i].sl,a[i].roll,a[i].name,a[i].course,a[i].marks,a[i].ph);


}