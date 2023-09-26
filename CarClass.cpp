#include <iostream>
using namespace std;
class Car{
private:
    string make;
    string model;
    int year;
    string color;
public:
    Car(string mk, string md, int yr, string clr){
      make=mk;
      model=md;
      year=yr;
      color=clr;
    }
    void print(){
      cout<<"Car Make: "<<make<<endl;
      cout<<"Car Model: "<<model<<endl;
      cout<<"Car Release Year: "<<year<<endl;
      cout<<"Color: "<<color<<endl;
    }
};
int main() {
  Car c1("Toyota","Camry",2023,"Blue");
  c1.print();
}