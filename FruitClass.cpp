#include <iostream>
using namespace std;
class Fruit{
  protected:
    int fruitn;
  public:
    Fruit(int num){
      fruitn=num;
    }
    int getfruitnum(){
      return fruitn;
    }
};
class Apple:public Fruit{
  public:
    Apple(int num) : Fruit(num){}
    void displayApple(){
      cout<<"\nNumber of Apples is: "<<getfruitnum();
    }
};
class Mango:public Fruit{
  public:
    Mango(int num) : Fruit(num){}
    void displayMango(){
      cout<<"\nNumber of Mangoes is: "<<getfruitnum();
    }
};
int main() {
  int apples, mangoes, total;
  cout<<"Enter number of apples: ";
  cin>>apples;
  cout<<"\nEnter number of mangoes: ";
  cin>>mangoes;
  Apple apple(apples);
  Mango mango(mangoes);
  apple.displayApple();
  mango.displayMango();
  total=apple.getfruitnum()+mango.getfruitnum();
  cout<<"\nTotal Number of Fruits in the Basket: "<<total;
}