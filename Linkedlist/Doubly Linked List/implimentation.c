#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *previous;
};
void DoublyLinkedListTraversalLeft(struct node* ptr){
    while(ptr!=NULL)
    {
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
void DoublyLinkedListTraversalRight(struct node* ptr){
    while(ptr!=NULL)
    {
        printf("Element:%d\n",ptr->data);
        ptr=ptr->previous;
    }
}
int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc (sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    head->data=10;
    head->previous=NULL;
    head->next=second;

    second->data=20;
    second->previous=head;
    second->next=third;

    third->data=30;
    third->previous=second;
    third->next=fourth;

    fourth->data=40;
    fourth->previous=third;
    fourth->next=NULL;

    DoublyLinkedListTraversalLeft(head);
    DoublyLinkedListTraversalRight(fourth);
}