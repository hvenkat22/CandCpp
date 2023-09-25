#include <iostream>
using namespace std;
class Swap {
  private:
    int value;
  public:
    Swap(int val){
      value=val;
    }
    int getValue() const {
        return value;
    }
    Swap operator+(Swap other) {
        Swap temp = value;
        value = other.value;    
        return temp;            
    }
};
int main() {
  int a,b;
  cout<<"Enter the two numbers a and b: ";
  cin>>a>>b;
  Swap n1(a),n2(b);
  n2=n1+n2;
  cout<<"\nThe values of a and b are: a->"<<n1.getValue()<<" b->"<<n2.getValue()<<endl;
}
