
//Program to illustrate the node insertion at the begining of the linked list.


#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
    int data;
    struct node * link;
}node;

void node_at_beg(node ** head, int data); //function to add node at the begining of the Link List

int main()
{
    
    node * head; //head pointer
    
    //Created Link List with first node
    head=(node *) malloc (sizeof(node));
    head->data=0;
    head->link=NULL;
    

    node_at_beg(&head, 1);
    node_at_beg(&head, 2);

    return 0;
}


void node_at_beg(node ** head, int data)
{   
    node * ptr;
    ptr=(node *) malloc (sizeof(node));
    ptr->data=data;
    
    
    ptr->link=*head;
    *head=ptr;
    

}
