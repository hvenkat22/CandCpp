#include <stdio.h>
int queue[100],n,front=-1,rear=-1;
void display();
void enqueue();
void dequeue();
void peek();
int main(void) {
  int num=0,choice=0;
  printf("Enter the size of the queue: ");
  scanf("%d",&n);
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
  if(front==-1 || rear==-1){
    printf("\nThe Queue is Empty...");
    return;
  }else{
    printf("\nThe Queue elements are: ");
    for(int i=front;i<=rear;i++){
      printf("%d ",queue[i]);
    }
    printf("\n");
  }
}
void enqueue(){
  int item;
  printf("\nEnter the element to Enqueue: ");
  scanf("%d",&item);
  if(rear==n-1){
    printf("\nQueue Array is Full!");
  }else if(front==-1 || rear==-1){
    front+=1;
    rear+=1;
    queue[rear]=item;
  }else{
    rear+=1;
    queue[rear]=item;
  }
}
void dequeue(){
  int val;
  if(front==-1 || rear==-1){
    printf("\nThe Queue is Empty..");
  }else if(front>rear){
    printf("\nThe Queue is Empty...");
  }else{
    val=queue[front];
    front+=1;
    printf("\nDequeued Element is: %d",val);
  }
}
void peek(){
  int val;
  if(front==-1 || rear==-1){
    printf("\nThe Queue is Empty..");
  }else if(front>rear){
    printf("\nThe Queue is Empty...");
  }else{
    val=queue[front];
    printf("\nPeek Element is: %d",val);
  }
}