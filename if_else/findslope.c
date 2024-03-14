#include<stdio.h>
int main(){
float a,b,c,d,e,f;
printf("enter points ");
scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
float m1=(d-b)/(c-a);
float m2=(f-d)/(e-c);
if(m1==m2){
    printf("its lies on straight line");
}else{
    printf("it does not lies on straight line");
}return 0;
}

