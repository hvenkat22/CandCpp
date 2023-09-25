#include <iostream>
using namespace std;
class triangle{
  public:
    int side1,side2,side3;
    triangle(int s1, int s2, int s3){
      side1=s1;
      side2=s2;
      side3=s3;
    }
};
class isosceles:public triangle{
  public:
    isosceles(int s1, int s2,int s3):triangle(s1,s2,s3){}
    bool isIsosceles(){
      if(side1==side2 || side2==side3 || side3==side1){
        return true;
      }
      return false;
    }
};
int main() {
  int side1,side2,side3;
  cout<<"Enter the 3 side lengths of the Triangle: ";
  cin>>side1>>side2>>side3;
  isosceles isc(side1,side2,side3);
  if(isc.isIsosceles()){
    cout<<"\nTriangle is Isosceles";
  }else{
    cout<<"\nTriangle is NOT Isosceles";
  }
}