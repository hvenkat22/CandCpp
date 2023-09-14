#include <stdio.h>
#include<stdlib.h>
int stack[100],n,top=-1;
void display();
void push(int num);
int pop();
int peek();
int main(void) {
  int num=0,choice=0;
  printf("Enter size of the Stack: ");
  scanf("%d",&n);
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
  if(top==n){
    printf("Stack is Full!");
  }else{
    top+=1;
    stack[top]=num;
  }
}
int pop(){
  if(top==-1){
    printf("Empty Stack!");
    return 0;
  }
  int item = stack[top];
  top-=1;
  return item;
}
int peek(){
  if(top==-1){
    printf("Empty Stack!");
    return -1;
  }else{
    return(stack[top]);
  }
}
void display(){
  if(top==-1){
    printf("Empty Stack!");
    return;
  }else{
    for(int i=n;i>=0;i--){
      printf("%d ",stack[i]);
    }
  }
}