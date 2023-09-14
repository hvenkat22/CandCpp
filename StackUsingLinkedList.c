#include <stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *next;
}*top;
void display();
void push(int num);
int pop();
int peek();
int main(void) {
  int num=0,choice=0;
  while(1){
    printf("\nEnter 1 to push, 2 to pop, 3 for peek, 4 to display or 5 to EXIT: ");
    scanf("%d",&choice);
    switch(choice){
      case 1:
        printf("\nEnter element: ");
        scanf("%d",&num);
        push(num);
        break;
      case 2:
        printf("\nPopped element is: %d\n",pop());
        break;
      case 3:
        printf("\nPeek element is: %d\n",peek());
        break;
      case 4:
        printf("\nElements of the Stack are: ");
        display();
        break;
      case 5:
        printf("\nExiting...Thank You!");
        exit(0);
        break;
      default:
        printf("Invalid Option!");
    }
  }
  return 0;
}
void push(int num){
  if(top==NULL){
    top=(struct node*)malloc(sizeof(struct node));
    top->next=NULL;
    top->data=num;
  }else{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->next=top;
    newnode->data=num;
    top=newnode;
  }
}
int pop(){
  int result;
  if(top==NULL){
    return -1;
  }
  struct node *ptr=top;
  result=top->data;
  top=top->next;
  free(ptr);
  return result;
  
}
int peek(){
  if(top==NULL){
    return -1;
  }
  return top->data;
}
void display(){
  if(top==NULL){
    printf("Empty Stack");
    return;
  }
  struct node *ptr=top;
  while(ptr!=NULL){
    printf("%d ->",ptr->data);
    ptr=ptr->next;
  }
}