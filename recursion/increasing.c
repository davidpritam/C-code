#include<stdio.h>
void increasing(int x,int n){
    if(x>n) return;
    printf(" %d\n  ",x);
    return increasing(x+1,n) ;

}

int main(){
     int n;
     printf("Enter a no : ");
     scanf("%d ",&n);
     increasing(1,n);
    
    return 0;
}