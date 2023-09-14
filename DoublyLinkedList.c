#include <stdio.h>
#include <stdlib.h>
struct Node {
  int data;
  struct Node* next;
  struct Node* prev;
};

void insertAtBeginning(struct Node** head_ref, int new_data) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data = new_data;
  new_node->next = (*head_ref);
  new_node->prev=NULL;
  (*head_ref) = new_node;
}


void insertAfter(struct Node* prev_node, int new_data) {
  if (prev_node == NULL) {
  printf("the given previous node cannot be NULL");
  return;
  }
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data = new_data;
  new_node->next = prev_node->next;
  prev_node->next = new_node;
  new_node->prev=prev_node;
}

void insertAtEnd(struct Node** head_ref, int new_data) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  struct Node* ptr = *head_ref; 

  new_node->data = new_data;
  new_node->next = NULL;

  if (*head_ref == NULL) {
  *head_ref = new_node;
  return;
  }
  while (ptr->next != NULL){
    ptr=ptr->next;
  } 
  ptr->next = new_node;
  new_node->prev=ptr;
}
void display(struct Node* node) {
  while (node != NULL) {
  printf(" %d<->", node->data);
  node = node->next;
  }
}
void deleteAtBeginning(struct Node** head){
  struct Node *ptr;
  if(head==NULL){
    printf("\nList is Empty");
  }else{
    ptr=*head;
    (*head)=ptr->next;
    (*head)->prev=NULL;
    free(ptr);
  }
}
void deleteAfter(struct Node* head,int loc){
  struct Node *ptr=head,*prev;
  for(int i=0;i<loc;i++){
    prev=ptr;
    ptr=ptr->next;
    if(ptr==NULL){
      return;
    }
  }
  ptr->next=prev->next;
  prev->next->prev=ptr;
  free(ptr);
}
void deleteAtEnd(struct Node* head){
  struct Node *ptr=head,*prev;
  while(ptr->next!=NULL){
    prev=ptr;
    ptr=ptr->next;
  }
  prev->next=NULL;
  free(ptr);
}
int main(void) {
  int choice,within,ins,delaf;
  struct Node* start=NULL;
  printf("Welcome to the Doubly Linked List Program!");
  while(1){
    printf("\nEnter 1 for Insertion, 2 for Deletion, or 0 to exit: ");
    scanf("%d",&choice);
    if(choice==1){
      printf("\nEnter 4 for beginning insertion, 5 for middle, or 6 for end: ");
      scanf("%d",&within);
      if(within==4){
        printf("\nEnter element to insert: ");
        scanf("%d",&ins);
        insertAtBeginning(&start,ins);
        printf("\nLinked List after Insertion at Beginning: ");
        display(start);
        continue;
      }else if(within==5){
        printf("\nEnter element to insert at Middle: ");
        scanf("%d",&ins);
        insertAfter(start->next,ins);
        printf("\nLinked List after Insertion at middle: ");
        display(start);
        continue;
      }else if(within==6){
        printf("\nEnter element to insert at end: ");
        scanf("%d",&ins);
        insertAtEnd(&start,ins);
        printf("\nLinked List after Insertion at end: ");
        display(start);
        continue;
      }
    }else if(choice==2){
      printf("\nEnter 4 for beginning deletion, 5 for middle, or 6 for end: ");
      scanf("%d",&within);
      if(within==4){
        deleteAtBeginning(&start);
        printf("\nThe Linked List after deletion at beginning: ");
        display(start);
        continue;
      }else if(within==5){
        printf("\nEnter the node number index to delete after: ");
        scanf("%d",&delaf);
        deleteAfter(start,delaf);
        printf("\nLinked List after Deletion After a node: ");
        display(start);
        continue;
      }else if(within==6){
        deleteAtEnd(start);
        printf("\nThe Linked List after deletion at end: ");
        display(start);
        continue;
      }
    }else if(choice==0){
      printf("\nPlease come again.");
      break;
    }else{
      printf("Please enter a number from given options.");
      continue;
    }
  }
}