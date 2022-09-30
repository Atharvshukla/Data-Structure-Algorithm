#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
 
void LinkedListTraversal(struct Node* ptr){
    while(ptr!=NULL)
    {
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct Node * delteFirst(struct Node *head){
    struct Node * ptr=head;
    head=head->next;
    free(ptr);
    return  head;
}
struct Node *deleteAtIndex(struct Node * head ,int index){
    struct Node *p = head;
    struct Node *q=head->next;
    for(int i=0;i<index-1;i++){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    return head;
}
int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

   
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));

    head->data=7; 
    head->next=second; 

    second->data=10;
    second->next=third;

    third->data=66;
    third->next=fourth;

    fourth->data=88;
    fourth->next= NULL;

    printf("LinkedList Before Delition:-");
    LinkedListTraversal(head);
    head=deleteAtIndex(head,2);
    printf("LinkedList After Delition:-");
    LinkedListTraversal(head);
}