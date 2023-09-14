#include <stdio.h>

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
  result=BinarySearch(arr,elem,n);
  if(result==-1){
    printf("\nEntered element is not present in the array");
  }else{
    printf("\nEntered element is present at index: %d",result);
  }
}
int BinarySearch(int arr[], int n, int elem){
  int left=0;
  int right=n-1;
  while(left<=right){
    int med = (left+right)/2;
    if(elem==arr[med]){
      return med;
    }else if(elem<arr[med]){
      right=med-1;
    }else{
      left=med+1;
    }
  }
  return -1;
}