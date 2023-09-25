#include <iostream>
using namespace std;
class Rect{
  public:
    int length,breadth;
    Rect(){
      length=0,breadth=0;
    }
    Rect(int same){
      length=same;
      breadth=same;
    }
    Rect(int l, int b){
      length=l;
      breadth=b;
    }
    int area(){
      return(length*breadth);
    }
    
};
int main() {
  Rect rect1,rect2(5),rect3(6,2);
  cout<<rect1.area()<<" "<<rect2.area()<<" "<<rect3.area()<<endl;
}