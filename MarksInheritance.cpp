#include <iostream>
using namespace std;
class Mark{
  public:
    int rollno;
    string name;
    int mark;
  public:
    Mark(int roll, string n, int m=0){
      rollno=roll;
      name=n;
      mark=m;
    }
};
class Physics:public Mark{
  int physmark;
  public:
    Physics(int roll, string n, int pm): Mark(roll,n){
      physmark=pm;
    }
    int getphys(){
      return physmark;
    }
};
class Chemistry:public Mark{
  int chemmark;
  public:
    Chemistry(int roll, string n, int cm): Mark(roll,n){
      chemmark=cm;
    }
    int getchem(){
      return chemmark;
    }
};
class Math:public Mark{
  int mathmark;
  public:
    Math(int roll, string n, int mm): Mark(roll,n){
      mathmark=mm;
    }
    int getmath(){
      return mathmark;
    }
};
int main() {
  int physics, math, chemistry,roll,total;
  float avg;
  string name;
  cout<<"Enter Student Name: ";
  cin>>name;
  cout<<"\nEnter Roll No: ";
  cin>>roll;
  cout<<"\nEnter Physics Mark: ";
  cin>>physics;
  cout<<"\nEnter Math Mark: ";
  cin>>math;
  cout<<"\nEnter Chemistry Mark: ";
  cin>>chemistry;
  Physics phy(roll,name,physics);
  Chemistry chem(roll,name,chemistry);
  Math maths(roll,name,math);
  total=phy.getphys()+chem.getchem()+maths.getmath();
  avg=float(total/3);
  cout<<"\nName: "<<name<<" Roll No.: "<<roll;
  cout<<"\nTotal Mark is: "<<total;
  cout<<"\nAverage Mark is: "<<avg;
}