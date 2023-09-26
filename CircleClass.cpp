#include <iostream>
#include<cmath>
using namespace std;
class Circle{
private:
    double radius;
public:
    Circle(double r){
      radius=r;
    }
    double circumference(){
      return(2*M_PI*radius);
    }
    double area(){
      return(M_PI*(radius*radius));
    }
};
int main() {
  double r;
  cout<<"Enter the radius of the circle: ";
  cin>>r;
  Circle circle(r);
  cout<<"Circumference of the circle: "<<circle.circumference()<<endl;
  cout<<"Area of the Circle: "<<circle.area()<<endl;
  return 0;
}