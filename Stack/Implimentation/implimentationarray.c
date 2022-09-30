#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size; // Size of stack(also array as we are implimenting in array)
    int top;  // variable pointing to top
    int *s;   // making an array dynamically
};
void create(struct stack *st) // this function will create a stack i.e array also in our case
{
    printf("Enter Size:-");
    scanf("%d", &st->size);                        // giving size of array
    st->top = -1;                                  // intializing the top pointer to -1 as now the stack is empty
    st->s = (int *)malloc(st->size * sizeof(int)); // creating an array dinamically
}

void Display(struct stack st)
{

    for (int i = st.top; i >= 0; i--) // we will run the loop from backside because stack is vertical and last input shoud be in first.
    {
        printf("%d", st.s[i]);
        printf("\n");
    }
}
void push(struct stack *st, int x) 
{
    if (st->top == st->size - 1) //if the top pointer which is initialized by -1  is equal to size-1 eg size is 5 and its full than pointer will be 4 and size-1 4 equal means oveloaded .
    {
        printf("Stack Is Overloaded:-");
    }
    else
    {
        st->top++; // increase the value of pointer which is firstly -1
        st->s[st->top] = x; // and store value of x 
    }
}
int pop(struct stack *st)
{
    int x = -1;
    if (st->top == -1)
    {
        printf("Stack Is Underflow \n");
    }
    else
    {
        x = st->s[st->top--];
    }
    return x;
}
int peek(struct stack st,int index)
{
    int x=-1;
    if(st.top-index+1<0){
        printf("Invalid INndex \n");  
    } 
    else{
        x=st.s[st.top-index+1];
    }
    return x;
}
int isEmpty(struct stack st)
{
    if(st.top==-1){
        return 1; 
    }
    return 0;
}
int isFull(struct stack st)
{
    return st.top==st.size-1;
}

int stacktop(struct stack st)
{
    if(!isEmpty(st)){
        return st.s[st.top];
    }
    return -1;   
}
int main()
{
    struct stack st;
    create(&st);
    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);
    push(&st, 50);
    Display(st);
    pop(&st);
    Display(st);
    return 0;
}