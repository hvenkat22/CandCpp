#include <iostream>
using namespace std;
class Person{
  string name;
  int age;
  public:
    Person(string na, int a){
      name=na;
      age=a;
    }
    void printInfo(){
      cout<<"\nName: "<<name;
      cout<<"\nAge: "<<age;
    }
};
class Employee{
  int id;
  double salary;
  public:
    Employee(int empid, double s){
      id=empid;
      salary=s;
    }
    void printEmpInfo(){
      cout<<"\nEmployee ID: "<<id;  
      cout<<"\nSalary: "<<salary;
    }
};
class EmployeeDetails: public Person, public Employee{
  public:
    EmployeeDetails(string name, int age, int id, double salary) : 
Person(name,age), Employee(id,salary){}
    void printEmpDetails(){
      printInfo();
      printEmpInfo();
    }
};
int main() {
  string name;
  int age, id;
  double salary;
  cout<<"Enter name: ";
  cin>>name;
  cout<<"\nEnter age: ";
  cin>>age;
  cout<<"\nEnter Employee ID: ";
  cin>>id;
  cout<<"\nEnter Salary: ";
  cin>>salary;
  EmployeeDetails emp1(name,age,id,salary);
  emp1.printEmpDetails();
}