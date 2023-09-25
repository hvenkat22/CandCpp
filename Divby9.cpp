#include <iostream>
using namespace std;
class Divby9{
  public:
    int sum;
    Divby9(){
      sum=0;
    }
    ~Divby9(){
      cout<<endl;
    }
    void sumanddisp(){
      for(int i=100; i<=200; i++){
        if(i%9==0){
          cout<<i<<" ";
          sum+=i;
        }
      }
      cout<<"\n\nSum of the numbers from 100 to 200 is: "<<sum<<endl;
    }
};

int main() {
  Divby9 D;
  D.sumanddisp();
}