#include <iostream>
using namespace std;
class Polygon{
  public:
    virtual float area()=0;
};
class Rectangle : public Polygon{
  public:
    int length,width;
    Rectangle(int l, int w){
      length=l;
      width=w;
    }
    float area(){
      return float(length*width);
    }
};
class Triangle : public Polygon{
  public:
    int base,height;
    Triangle(int b,int h){
      base=b;
      height=h;
    }
    float area(){
      return(float((base*height)/2));
    }
};
int main() {
  int length,width,base,height;
  cout<<"Enter Rectangle length: ";
  cin>>length;
  cout<<"\nEnter Rectangle Width: ";
  cin>>width;
  cout<<"\nEnter Triangle Base Length: ";
  cin>>base;
  cout<<"\nEnter Triangle Height: ";
  cin>>height;
  Rectangle rec(length,width);
  Triangle tri(base,height);
  cout<<"\nRectangle Area: "<<rec.area();
  cout<<"\nTriangle Area: "<<tri.area();
}