#include<stdio.h>
void england() {
    printf(" you are englandian\n ");
    return;
}
void australia() {
    printf(" you are australian\n ");
    england();
    return;
}
void india() {
    printf(" you are an indian\n ");
    australia();
    return;
}
int main() {
    india();
    return 0;
}