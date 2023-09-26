#include <iostream>
#include<cmath>
using namespace std;
class Triangle{
private:
    double side1,side2,side3;
public:
    Triangle(double s1,double s2,double s3){
      side1=s1;
      side2=s2;
      side3=s3;
    }
    double perimeter(){
      return(side1+side2+side3);
    }
    double area(){
      double s=perimeter()/2;
      return(sqrt(s*(s-side1)*(s-side2)*(s-side3)));   
    }
};
int main() {
  Triangle t1(3,4,5);
  cout<<"Perimeter of the Triangle is: "<<t1.perimeter()<<endl;
  cout<<"Area of the Triangle is: "<<t1.area()<<endl;
}