#include <stdio.h>
struct Student{
  char name[20];
  int roll_no;
  int CGPA;
};
int main(void) {
  struct Student *stud_ptr,stud1;
  stud_ptr=&stud1;
  printf("Enter Name: ");
  scanf("%s",stud_ptr->name);
  printf("Enter Roll No: ");
  scanf("%d",&stud_ptr->roll_no);
  printf("Enter CGPA: ");
  scanf("%d",&stud_ptr->CGPA);
  printf("\nStudent Details: ");
  printf("\nName: %s\n",stud_ptr->name);
  printf("Roll no: %d\n",stud_ptr->roll_no);
  printf("CGPA: %d\n",stud_ptr->CGPA);
  return 0;
}