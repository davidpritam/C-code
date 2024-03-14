#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=i-1;
        int b=1;
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            int d=b+64;
            char ch=(char)d;

            printf("%c",d);
            b++;
        }
        for(int q=1;q<=i-1;q++){
            char ch=(char)(q+64);
        
            printf("%c",ch);
            a--;
        }
        printf("\n");
    }
    return 0;
}