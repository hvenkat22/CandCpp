#include <iostream>
using namespace std;
class Employee{
  public:
    string name;
    Employee(){
      name="Not known";
    }
    Employee(string na){
      name=na;
    }
};
int main() {
  string name;
  cout<<"Employee name: "<<endl;
  cin>>name;
  Employee e1(name);
  cout<<"Employee name updated to: "<<e1.name<<endl;
}