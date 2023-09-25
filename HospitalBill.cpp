#include <iostream>
using namespace std;
int totalBill(int medamt, int days){
  return(medamt*days);
}
int totalBill(double roomamt, int days){
  return(roomamt*days);
}
int main() {
  int days1,medi,room,days2;
  cout<<"Enter the amount for medicines: "<<endl;
  cin>>medi;
  cout<<"Enter the number of days: "<<endl;
  cin>>days1;
  cout<<"\nEnter Room amount: "<<endl;
  cin>>room;
  cout<<"Enter number of days: "<<endl;
  cin>>days2;
  cout<<"Total Bill for Medicine: "<<totalBill(medi,days1)<<endl;
  cout<<"Total Bill for Room: "<<totalBill(room,days2)<<endl;
  return 0;
}