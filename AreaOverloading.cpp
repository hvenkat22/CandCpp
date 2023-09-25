#include <iostream>
#include<cmath>
using namespace std;
int area(int s){
  return(s*s);
}
int area(int l, int b){
  return(l*b);
}
float area(float r){
  return(M_PI*r*r);
}
float area(float b, float h){
  return((b*h)/2);
}
int main() {
  int side,len,breadth;
  float rad,base,ht;
  cout<<"Enter side length of Square: ";
  cin>>side;
  cout<<"\nEnter length and breadth of Rectangle: ";
  cin>>len>>breadth;
  cout<<"\nEnter radius of Circle: ";
  cin>>rad;
  cout<<"\nEnter base and height of Triangle: ";
  cin>>base>>ht;
  cout<<"\nArea of Square is: "<<area(side)<<endl;
  cout<<"\nArea of Rectangle is: "<<area(len,breadth)<<endl;
  cout<<"\nArea of Circle is: "<<area(rad)<<endl;
  cout<<"\nArea of Triangle is: "<<area(base,ht)<<endl;
  return 0;
}
