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
struct node * insertAthFirst(struct node *head,int data){
    struct node *ptr =(struct node*)malloc(sizeof(struct node)); //This will give you a structure pointer i.e node with name ptr EMPTY NODE WHICH IS TO BE INSERTED
    ptr->next = head;     // inside pointer of node points to head 
    ptr->data=data;      //indide data of node ptr will have data passed
    ptr->previous=NULL;
    head->previous=ptr;
    return ptr;         // this will break the old head point and now head will point to ptr node 
}

struct node * insertAIndex(struct node *head,int data,int index){
 struct node *ptr =(struct node*)malloc(sizeof(struct node)); //This will give you a structure pointer i.e node with name ptr EMPTY NODE WHICH IS TO BE INSERTED
     struct node *p =head;
     for(int i=0;i<index;i++){
        p=p->next;
     }
     ptr->data=data;
     ptr->next=p->next;
     ptr->previous=p;
     p->next=ptr;
     p->next->previous=ptr;
     return head; 
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
    // head=insertAthFirst(head,78);
    head=insertAIndex(head,99,1);
    DoublyLinkedListTraversalRight(fourth);
}