#include "stack.h"
#include <assert.h>

void initialize(stack* s){
  //implement initialize here
  s->head=NULL; //sets head to NULL//
}

void push(int x, stack* s){
    //implement push here
  node *next_node = (node*)malloc(sizeof(node));
  next_node->next = s-> head; 
  s-> head = next_node; //points head to next memory//
  s-> head -> data = x; //pushes the value of x// 
}

int pop(stack* s){
// implement pop here
assert(s-> head != NULL); //checks the precondition, stack should not be empty//
int pop_value; //the value of pop//
node *temp = s-> head; 
pop_value = s-> head -> data; 
s-> head = s-> head -> next; //head points to next element//
free(temp); 

return pop_value;
}

bool empty(stack* s)
{
  //implement empty here
  if (s->head == NULL){ //if statement to check whether the stack is empty or not//
     return true; //returns true if stack is empty//
  }
  else {
     return false; //returns false if stack is not empty//
}
}

bool full(stack* s) {
    //implement full here
    //stack can't be full//
  return false;
}
