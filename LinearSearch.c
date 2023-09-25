#include <stdio.h>
int LinearSearch(int arr[], int elem, int n);
int main(void) {
  int n,elem,result;
  printf("Enter the size of the array: ");
  scanf("%d",&n);
  int arr[n];
  printf("\nEnter the elements of the array: ");
  for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
  }
  printf("\nEnter the element to search for: ");
  scanf("%d",&elem);
  result=LinearSearch(arr,elem,n);
  if(result==-1){
    printf("\nEntered element is not present in the array");
  }else{
    printf("\nEntered element is present at index: %d",result);
  }
}
int LinearSearch(int arr[], int elem, int n){
  int flag=0,pos=0;
  for(int i=0; i<n; i++){
    if(arr[i]==elem){
      flag=1;
      pos=i;
      break;
    }
  }
  if(flag==1){
    return pos;
  }
  return -1;
}