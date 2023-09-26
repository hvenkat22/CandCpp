#include <iostream>
using namespace std;
class Complex{
private:
    double real;
    double imaginary;
public:
    Complex(double rl, double imag){
      real=rl;
      imaginary=imag;
    }
    void add(Complex c1){
      real+=c1.real;
      imaginary+=c1.imaginary;
    }
    void display(){
      cout<<"Result: "<<real<<" + "<<imaginary<<"i"<<endl;
    }
};
int main() {
  double real1,imag1,real2,imag2;
  cout<<"Enter real and imaginary parts of the first complex number: "<<endl;
  cin>>real1>>imag1;
  cout<<"Enter real and imaginary parts of the second complex number: "<<endl;
  cin>>real2>>imag2;
  Complex c1(real1,imag1);
  Complex c2(real2,imag2);
  c1.add(c2);
  c1.display();
}