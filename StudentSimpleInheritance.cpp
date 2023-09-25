#include <iostream>
using namespace std;
class Student{
  string name;
  int age;
  public:
    Student(string name, int age){
      this->name=name;
      this->age=age;
    }
    void printInfo(){
      cout<<"Student Name: "<<name;
      cout<<"\nStudent Age: "<<age;
    }
};
class Graduate: public Student{
  string research;
  public:
    Graduate(string na, int Age,string topic) : Student(na,Age){
      research=topic;
    }
    void printGraduate(){
      Student::printInfo();
      cout<<"\nResearch Topic: "<<research;
    }
};
int main() {
  string name;
  int age;
  string study;
  cout<<"Enter name: ";
  cin>>name;
  cout<<"\nEnter age: ";
  cin>>age;
  cout<<"\nEnter research: ";
  cin>>study;
  Graduate gstud1(name,age,study);
  gstud1.printGraduate();
}