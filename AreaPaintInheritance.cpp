#include <iostream>
using namespace std;
class Shape{
  protected:
    int width, height;
  public:
    Shape(int w, int h){
      width=w;
      height=h;
    }
};
class PaintCost{
  int costpersqft;
  public:
    PaintCost(int costper){
      costpersqft=costper;
    }
    int getcostper(){
      return costpersqft;
    }
};
class Rectangle: public Shape, public PaintCost{
  public:
    Rectangle(int w,int h, int cost):Shape(w,h),PaintCost(cost){}
    int calcarea(){
      return width*height;
    }
};
int main() {
  int width,height,costper;
  cout<<"Enter width: ";
  cin>>width;
  cout<<"\nEnter height: ";
  cin>>height;
  cout<<"\nEnter paint cost per sq ft: ";
  cin>>costper;
  Rectangle r1(width,height,costper);
  cout<<"\nTotal Area: "<<r1.calcarea();
  cout<<"\nTotal Paint Cost: "<<r1.calcarea()*costper;
}