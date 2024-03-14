#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    int data;
    struct node* next;

}nd;
void linklisttraversal(nd* start) {
    while (start != NULL) {
        printf("Element: %d\n", start->data);
        start = start->next;
    }
}
int main() {
    nd* head, * second, * third;
    head = (nd*)malloc(sizeof(nd));
    second = (nd*)malloc(sizeof(nd));
    third = (nd*)malloc(sizeof(nd));
    //head->data=4;
    printf("\nEnter the first node ");
    scanf("%d", &head->data);
    head->next = second;
    //second = (nd*)malloc(sizeof(nd));
    printf("\nEnter the second node ");
    scanf("%d", &second->data);
    //second->data=5;
    second->next = third;
    //third = (nd*)malloc(sizeof(nd));
    printf("\nEnter the third node ");
    scanf("%d", &third->data);
    //third->data=6;
    third->next = NULL;
    linklisttraversal(head);
    return 0;
}