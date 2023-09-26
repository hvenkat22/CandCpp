#include <stdio.h>

int main() {
  int n;
  printf("Enter the dimension of the matrices (n): ");
  scanf("%d",&n);
  int mat1[n][n],mat2[n][n],mat3[n][n];
  printf("\nEnter the elements of Matrix 1: ");
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      scanf("%d",&mat1[i][j]);
    }
  }
  printf("\nEnter the elements of Matrix 2: ");
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      scanf("%d",&mat2[i][j]);
    }
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      for(int k=0; k<n; k++){
        mat3[i][j]+=(mat1[i][k]*mat2[k][j]);
      }
    }
  }
  printf("\nThe resultant matrix after multiplication is: \n");
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      printf("%d ",mat3[i][j]);
    }
    printf("\n");
  }
}