#include <stdio.h>
struct Item{
char item_name[20];
int quantity;
float price;
float amount;
};
int main(void) {
  struct Item *item_ptr,item1;
  item_ptr=&item1;
  printf("Enter Item Name: ");
  scanf("%s",item_ptr->item_name);
  printf("Enter Quantity: ");
  scanf("%d",&item_ptr->quantity);
  printf("Enter Price: ");
  scanf("%f",&item_ptr->price);
  item_ptr->amount = item_ptr->quantity * item_ptr->price;
  printf("\nItem Details: ");
  printf("Item Name: %s\n",item_ptr->item_name);
  printf("Item Quantity: %d\n",item_ptr->quantity);
  printf("Item Price: %.2f\n",item_ptr->price);
  printf("Amount: %.2f\n",item_ptr->amount);
  return 0;
}