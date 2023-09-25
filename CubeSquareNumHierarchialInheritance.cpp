#include <iostream>
using namespace std;
class Number{
  protected:
    int value;
  public:
    Number(int num){
      value=num;
    }
};
class Square:public Number{
  public:
    Square(int num) : Number(num){}
    int squarecal(){
      return value*value;
    }
};
class Cube:public Number{
  public:
    Cube(int num) : Number(num){}
    int cubecal(){
      return value*value*value;
    }
};
int main() {
  int number;
  cout<<"Enter the number: ";
  cin>>number;
  Square sq(number);
  Cube cb(number);
  cout<<"\nSquare of number is: "<<sq.squarecal();
  cout<<"\nCube of number is: "<<cb.cubecal();
  return 0;
}