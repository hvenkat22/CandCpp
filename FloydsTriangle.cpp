#include <iostream>
using namespace std;
class Floyd{
  public:
    int n;
    Floyd(int size){
      n=size;
    }
    ~Floyd(){
      cout<<endl;
    }
    void display(){
      int k=1;
      for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
          cout<<k<<" ";
          k++;
        }
        cout<<"\n";
      }
    }
};
int main() {
  int n;
  cin>>n;
  Floyd F(n);
  F.display();
}