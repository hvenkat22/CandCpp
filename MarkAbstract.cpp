#include <iostream>
using namespace std;
class Marks{
  public:
    virtual float getPercentage()=0;
};
class A: public Marks{
  private:
    float m1,m2,m3;
  public:
    A(float one, float two, float three){
      m1=one;
      m2=two;
      m3=three;
    }
    float getPercentage(){
      return((m1+m2+m3)/3.0);
    }
};
class B: public Marks{
  private:
    float m1,m2,m3,m4;
  public:
    B(float one, float two, float three,float four){
      m1=one;
      m2=two;
      m3=three;
      m4=four;
    }
    float getPercentage(){
      return((m1+m2+m3+m4)/4.0);
    }
};
int main() {
  float m1,m2,m3,m4,m11,m22,m33;
  cout<<"Enter the three marks of Student A: ";
  cin>>m11>>m22>>m33;
  cout<<"\nEnter the four marks of Student B: ";
  cin>>m1>>m2>>m3>>m4;
  A studA(m11,m22,m33);
  B studB(m1,m2,m3,m4);
  cout<<"\nPercentage of Student A: "<<studA.getPercentage();
  cout<<"\nPercentage of Student B: "<<studB.getPercentage();
}