#include <iostream>
#include<cmath>
using namespace std;
class Shape{
  public:
    virtual int calculateArea()=0;
};
class Rectangle : public Shape{
  public:
    int length,width;
    Rectangle(int l, int w){
      length=l;
      width=w;
    }
    int calculateArea(){
      return length*width;
    }
};
class Circle : public Shape{
  public:
    int radius;
    Circle(int r){
      radius=r;
    }
    int calculateArea(){
      return(M_PI*radius*radius);
    }
};
class Square : public Shape{
  public:
    int side;
    Square(int s){
      side=s;
    }
    int calculateArea(){
      return(side*side);
    }
};
int main() {
  int length,width,side,radius;
  cout<<"Enter Rectangle length: ";
  cin>>length;
  cout<<"\nEnter Rectangle Width: ";
  cin>>width;
  cout<<"\nEnter Circle Radius: ";
  cin>>radius;
  cout<<"\nEnter Square Side Length: ";
  cin>>side;
  Rectangle rec(length,width);
  Circle cir(radius);
  Square squ(side);
  cout<<"\nRectangle Area: "<<rec.calculateArea();
  cout<<"\nCircle Area: "<<cir.calculateArea();
  cout<<"\nSquare Area: "<<squ.calculateArea();
}