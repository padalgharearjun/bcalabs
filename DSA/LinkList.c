
#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
    int data;
    struct node * link;
}node;

void node_at_beg(node ** head, int data); //function to add node at the begining of the Link List

node * node_at_end(node * ptr, int data); //function to add node at the end of the Link List

int main()
{
    
    node * head; //head pointer
    
    node * ptr; //pointer to traverse the LL
    
    
    
    
    //Created Link List with first node
    head=(node *) malloc (sizeof(node));
    head->data=0;
    head->link=NULL;
    
    
    ptr=head;
    //ptr pointer to travers to the last node of LL
    while(ptr->link != NULL)
    {
       ptr=ptr->link; 
    }
    
    
    
    

    node_at_beg(&head, 2);
    node_at_beg(&head, 1);
    
    ptr= node_at_end(ptr, 3);
    ptr= node_at_end(ptr, 4);
    
    node_at_beg(&head, 0);
    
    return 0;
}

node * node_at_end(node * ptr, int data)
{
    node * temp;
    temp=(node *) malloc (sizeof(node));
    temp->data= data;
    temp ->link= NULL;
    
    ptr->link= temp;
    
    return temp;
}


void node_at_beg(node ** head, int data)
{   
    node * ptr;
    ptr=(node *) malloc (sizeof(node));
    ptr->data=data;
    
    
    ptr->link=*head;
    *head=ptr;
    

}
