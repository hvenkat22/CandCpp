#include <iostream>
using namespace std;
class InsertAmount{
  public:
    int amount=300;
    InsertAmount(){
        
    }
    InsertAmount(int add){
      amount+=add;
    }
};
int main() {
  int add;
  cout<<"Enter the amount to add: "<<endl;
  cin>>add;
  InsertAmount I1(add);
  cout<<"Updated amount is: "<<I1.amount;
}