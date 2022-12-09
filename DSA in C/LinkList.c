#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    int id;
    struct student *link;
}student;

//function to insert node at end of the link list
void node_at_end ( student * head, int id);

int main()
{
    student * head;
    
    //1st node and head pointer
    head= (student *) malloc (sizeof(student));
    head->id = 1;
    head->link = NULL;
    
    node_at_end(head, 2);
    node_at_end(head, 3);
    node_at_end(head, 4);
    node_at_end(head, 5);
    node_at_end(head, 6);
    node_at_end(head, 7);
    
    
    
    return 0;
}

void node_at_end ( student * head, int id)
{
  student * temp;
  student * ptr;
  
  //create node
  temp=(student *) malloc (sizeof(student));
  temp->id=id;
  temp->link=NULL;
  
  //search end of the link list
  ptr=head;
  
  while(ptr->link != NULL)
  {
      ptr=ptr->link;
  }
  
  //linking temp node to last node of the link list
  ptr->link=temp;
  
  
}