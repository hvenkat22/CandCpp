#include <iostream>
using namespace std;
class Student{
  public:
    int feet,inches;
    Student(int ft, int in){
      feet=ft;
      inches=in;
    }
    bool operator >(Student s2){
      if(feet>s2.feet){
        return true;
      }else if(feet==s2.feet){
        if(inches>s2.inches){
          return true;
        }
        return false;
      }
      return false;
    }
};
int main() {
  int s1feet,s1inches,s2feet,s2inches;
  cout<<"Enter Student 1 feet and inches: ";
  cin>>s1feet>>s1inches;
  cout<<"Enter Student 2 feet and inches: ";
  cin>>s2feet>>s2inches;
  Student stud1(s1feet,s1inches),stud2(s2feet,s2inches);
  if(stud1>stud2){
    cout<<"\nStudent 1 is taller.";
  }else if(stud2>stud1){
    cout<<"\nStudent 2 is taller.";
  }else{
    cout<<"\nBoth Students are the same height!";
  }
  return 0;
}