
//Program to illustrate the node insertion at the begining of the linked list.

#include <stdio.h>
#include <stdlib.h>

//created node structure with one int data and link pointer poinintg next node. 
typedef struct node
{
    int data;
    struct node *link;
}node;

int main()
{
    //First node
    node * head;
    head = (node * ) malloc(sizeof(node));
    head->data=1;
    head->link=NULL;

    //WorkinProgress











    return 0;
}