#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node * next;
};

void LinkedListTraversal(struct Node* ptr)
{
    while(ptr!=NULL)
    {
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct Node * insertAthFirst(struct Node *head,int data){
    struct Node *ptr =(struct Node*)malloc(sizeof(struct Node)); //This will give you a structure pointer i.e node with name ptr EMPTY NODE WHICH IS TO BE INSERTED
    ptr->next = head;     // inside pointer of node points to head 
    ptr->data=data;      //indide data of node ptr will have data passed
    return ptr;         // this will break the old head point and now head will point to ptr node 
}

struct Node * insertAtIndex(struct Node * head,int data,int index){
     struct Node *ptr =(struct Node*)malloc(sizeof(struct Node)); //This will give you a structure pointer i.e node with name ptr EMPTY NODE WHICH IS TO BE INSERTED
     struct Node *p =head;
     for(int i=0;i!=index-1;i++){
        p=p->next;
     }
     ptr->data=data;
     ptr->next=p->next;
     p->next=ptr;
     return head; 
      
}
struct Node * insertAthEnd(struct Node *head,int data){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node ));
    struct Node *p=head;
    for(int i=0;p->next!=NULL;i++){
        p=p->next;
    }
    p->next=ptr;
    ptr->next= NULL;
    return ptr;
}
int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
   
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node)); 
    head->data=7; 
    head->next=second; 

    second->data=10;
    second->next=third;

    third->data=66;
    third->next=NULL; 
    LinkedListTraversal(head);
    // head=insertAthFirst(head,78);
    // head=insertAtIndex(head,99,1);
    // head=insertAthEnd(head,88);
    LinkedListTraversal(head);
    

}