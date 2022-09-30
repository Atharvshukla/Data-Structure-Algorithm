#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node * next;
};

int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    // Allocating memory in heap dinamically helps to reduce space complexity.  
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node)); 
    head->data=7; //Giving the value or data which i want to store in the node
    head->next=second; //linking now  the first two nodes

    second->data=10;
    second->next=third;

    third->data=18;
    second->next=NULL; 
}