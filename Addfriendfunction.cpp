#include <iostream>
using namespace std;
class B;
class A{
  private:
    int numA;
  public:
    A(int num){
      numA=num;
    }
    friend int add(A,B);
};
class B{
  private:
    int numB;
  public:
    B(int num){
      numB=num;
    }
    friend int add(A,B);
};
int add(A num1, B num2){
  return(num1.numA+num2.numB);
}
int main() {
  int num1,num2;
  cout<<"Enter num 1: ";
  cin>>num1;
  cout<<"\nEnter num 2: ";
  cin>>num2;
  A aobj(num1);
  B bobj(num2);
  cout<<"\nSum is: "<<add(aobj,bobj);
}