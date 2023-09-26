#include <iostream>
using namespace std;
class AddDistance{
private:
    int feet;
    int inches;
public:
    AddDistance(int ft, int in){
      feet=ft;
      inches=in;
    }
    void adddist(AddDistance d1){
      feet+=d1.feet;
      inches+=d1.inches;
      if(inches>=12){
        feet+=inches/12;
        inches%=12;
      }
    }
    void display(){
      cout<<"Total Distance: "<<feet<<" feet "<<inches<<" inches"<<endl;
    }
};
int main() {
  AddDistance dist1(5,9);
  AddDistance dist2(3,10);
  dist1.adddist(dist2);
  dist1.display();
}