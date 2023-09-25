#include <iostream>
using namespace std;
class Compote{
  int lemons,apples,pears;
  public:
    Compote(int a, int b, int c){
      lemons=a;
      apples=b;
      pears=c;
    }
    int findmax(){
      int f=0,sum=0;
      while(f!=1){
        if(lemons*2<=apples && lemons*4<=pears){
          sum=lemons+lemons*2+lemons*4;
          f=1;
        }else{
          lemons--;
        }
      }
      return sum;
    }
};
int main() {
  int lemons,apples,pears;
  cout<<"Enter number of lemons: ";
  cin>>lemons;
  cout<<"\nEnter number of apples: ";
  cin>>apples;
  cout<<"\nEnter number of pears: ";
  cin>>pears;
  Compote cpt(lemons,apples,pears);
  cout<<"\nMax number of lemons, pears, apples that can be cooked are: "<<cpt.findmax();
}