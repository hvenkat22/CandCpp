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
class FormatMeasurement:public ReceiveMeasurement{
  public:
    FormatMeasurement(int l, int b):ReceiveMeasurement(l,b){}
    void displaymeasurement(){
      cout<<"\nLength: "<<length;
      cout<<"\nBreadth: "<<breadth;
    }
};
int main() {
  int length,breadth;
  cout<<"Enter Length: ";
  cin>>length;
  cout<<"\nEnter Breadth: ";
  cin>>breadth;
  FormatMeasurement form(length,breadth);
  form.displaymeasurement();
}