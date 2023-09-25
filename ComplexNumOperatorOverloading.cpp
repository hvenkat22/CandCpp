#include <iostream>
using namespace std;
class ComplexNum{
  int real,imag;
  public:
    ComplexNum(){
      real=0,imag=0;
    }
    void input(){
      cout<<"\nEnter the real and imaginary parts: ";
      cin>>real>>imag;
    }
    ComplexNum operator +(ComplexNum c1){
      ComplexNum res;
      res.real=real+c1.real;
      res.imag=imag+c1.imag;
      return(res);
    }
    void print(){
      cout<<"\nResulting Complex Number: "<<real<<" + "<<imag<<"i"<<endl;
    }
    
};
int main() {
  ComplexNum c1,c2,result;
  cout<<"Enter the first Complex Number: ";
  c1.input();
  cout<<"\nEnter the second Complex Number: ";
  c2.input();
  result=c1+c2;
  result.print();
}