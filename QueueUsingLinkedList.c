#include <stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *next;
}*front,*rear;
void display();
void enqueue();
void dequeue();
void peek();
int main(void) {
  int num=0,choice=0;
  while(choice != 5){
    printf("\nEnter 1 to Enqueue, 2 to Dequeue, 3 to Display, 4 to find peek, or 5 to EXIT: ");
    scanf("%d",&choice);
    if(choice==1){
      enqueue();
    }else if(choice==2){
      dequeue();
    }else if(choice==3){
      display();
    }else if(choice==4){
      peek();
    }else if(choice==5){
      printf("\nThank you! Please come again!");
    }else{
      printf("\nInvalid Option!");
    }
  }
  return 0;
}
void display(){
  struct node *temp;
  if ((front == NULL) && (rear == NULL)) {
        printf("\nQueue is Empty\n");
  } else {
      printf("The queue is \n");
      temp = front;
      while (temp) {
        printf("%d--->", temp->data);
        temp = temp->next;
      }
      printf("\n");
    }
}
void enqueue(){
  int val;
  struct node* newnode = (struct node*)malloc(sizeof(struct node));
  printf("\nEnter the element to Enqueue: ");
  scanf("%d",&val);
  newnode->data=val;
  newnode->next=NULL;
  if(front==NULL || rear==NULL){
    front=newnode;
    rear=newnode;
  }else{
    rear->next=newnode;
    rear=newnode;
  }
}
void dequeue(){
  int val;
  struct node *ptr;
  if(front==NULL || rear==NULL){
    printf("\nEmpty Queue\n");
  }else{
    printf("\nDequeued element is: %d",front->data);
    ptr=front;
    front=front->next;
    free(ptr);
  }
}
void peek(){
  struct node *ptr;
  if(front==NULL || rear==NULL){
    printf("\nEmpty Queue\n");
  }else{
    printf("\nPeek element is: %d",front->data);
  }
}