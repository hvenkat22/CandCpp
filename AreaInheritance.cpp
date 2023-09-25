#include <iostream>
using namespace std;
class ReceiveMeasurement{
  protected:
    int length,breadth;
  public:
    ReceiveMeasurement(int l, int b){
      length=l;
      breadth=b;
    }
};
class CalculateArea:public ReceiveMeasurement{
  public:
    CalculateArea(int l, int b):ReceiveMeasurement(l,b){}
    int calcarea(){
      return length*breadth;
    }
};
int main() {
  int length, breadth;
  cout<<"Enter length: ";
  cin>>length;
  cout<<"\nEnter breadth: ";
  cin>>breadth;
  CalculateArea ca(length,breadth);
  cout<<"\nArea is: "<<ca.calcarea();
}