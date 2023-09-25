#include <iostream>
#include<cmath>
using namespace std;
double volume(int side){
  return(side*side*side);
}
double volume(double radius, double height){
  return(M_PI*(radius*radius)*height);
}
double volume(double radius){
  return((4.0/3)*M_PI*(radius*radius*radius));
}
int main() {
  int choice,side;
  double radius, height;
  cout<<"Enter 1 for Cube, 2 for Cylinder, or 3 for Sphere: "<<endl;
  cin>>choice;
  if(choice==1){
    cout<<"Enter side length: "<<endl;
    cin>>side;
    cout<<"\nVolume of Cube with given side length is: "<<volume(side)<<endl;
  }else if(choice==2){
    cout<<"Enter radius: "<<endl;
    cin>>radius;
    cout<<"Enter height: "<<endl;
    cin>>height;
    cout<<"\nVolume of Cylinder with given radius and height is: "<<volume(radius,height)<<endl;
  }else if(choice==3){
    cout<<"Enter radius: "<<endl;
    cin>>radius;
    cout<<"\nVolume of Sphere with given radius is: "<<volume(radius)<<endl;
  }else{
    cout<<"\nPlease enter 1,2,or 3"<<endl;
  }
}