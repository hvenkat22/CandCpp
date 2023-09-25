#include <iostream>
using namespace std;
class Student{
  public:
    int rollno, m1,m2,m3,m4,m5;
    Student(int roll, int one, int two, int three, int four, int five){
      rollno=roll;
      m1=one;
      m2=two;
      m3=three;
      m4=four;
      m5=five;
    }
};
class Laboratory{
  public:
    int labmark;
    Laboratory(int lab){
      labmark=lab;
    }
};
class marklist: public Student, public Laboratory{
  public:
    marklist(int roll,int m1,int m2,int m3,int m4,int m5,int lab):Student(roll,m1,m2,m3,m4,m5),Laboratory(lab){}
    void display(){
      cout<<"\nRoll No: "<<rollno;
      cout<<"\nMark 1: "<<m1;
      cout<<"\nMark 2: "<<m2;
      cout<<"\nMark 3: "<<m3;
      cout<<"\nMark 4: "<<m4;
      cout<<"\nMark 5: "<<m5;
      cout<<"\nLab Mark: "<<labmark;
      cout<<"\nTotal: "<<m1+m2+m3+m4+m5+labmark;
      cout<<"\nAverage: "<<float((m1+m2+m3+m4+m5+labmark)/6);
    }
};

int main() {
  int roll,m1,m2,m3,m4,m5,labmark;
  cout<<"Enter roll no: ";
  cin>>roll;
  cout<<"\nEnter mark 1: ";
  cin>>m1;
  cout<<"\nEnter mark 2: ";
  cin>>m2;
  cout<<"\nEnter mark 3: ";
  cin>>m3;
  cout<<"\nEnter mark 4: ";
  cin>>m4;
  cout<<"\nEnter mark 5: ";
  cin>>m5;
  cout<<"\nEnter labmark: ";
  cin>>labmark;
  marklist obj(roll,m1,m2,m3,m4,m5,labmark);
  obj.display();
  return 0;
}