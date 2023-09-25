#include <iostream>
using namespace std;
class CubeVol{
  public:
    int side;
    CubeVol(int s){
      side=s;
    }
    ~CubeVol(){
      cout<<endl;
    }
    void dispvolume(){
      cout<<"Volume of Cube is: "<<side*side*side<<endl;
    }
};
int main() {
  int sidelen;
  cout<<"Enter the side length: "<<endl;
  cin>>sidelen;
  CubeVol c1(sidelen);
  c1.dispvolume();
}