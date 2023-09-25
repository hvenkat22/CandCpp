#include <iostream>
using namespace std;
class Counter{
  private:
    int count;
  public:
    Counter(){
      count=0;    
    }
    void operator ++(){
      ++count;
    }
    int getCount(){
      return count;
    }
};
int main() {
  Counter counter;
  cout<<"Initial count: "<<counter.getCount()<<endl;
  ++counter;
  cout<<"Count after one increment: "<<counter.getCount()<<endl;
  ++counter;
  cout<<"Count after two increments: "<<counter.getCount()<<endl;
}