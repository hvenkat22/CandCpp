#include <iostream>
using namespace std;
class Room{
private:
    double length;
    double height;
    double breadth;
public:
    Room(double len, double ht, double bdh){
      length=len;
      height=ht;
      breadth=bdh;
    }
    double area(){
      return(length*breadth);
    }
    double volume(){
      return(length*breadth*height);
    }
};
int main() {
  Room room1(10,8,12);
  Room room2(15,12,9);
  cout<<"Room1: "<<endl;
  cout<<"Area: "<<room1.area()<<endl;
  cout<<"Volume: "<<room1.volume()<<endl;
  cout<<"\nRoom2: "<<endl;
  cout<<"Area: "<<room2.area()<<endl;
  cout<<"Volume: "<<room2.volume()<<endl;
  return 0;
}