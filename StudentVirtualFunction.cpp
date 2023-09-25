#include <iostream>
using namespace std;
class Person{
  public:
    string name;
    int age;
    Person(string n, int a){
      name=n;
      age=a;
    }
    virtual void getdata(){
      cout<<"\nEnter Name: ";
      cin>>name;
      cout<<"Enter Age: ";
      cin>>age;
    }
    virtual void putdata(){
      cout<<"\nName: "<<name;
      cout<<"\nAge: "<<age;
    }
};
class Professor:public Person{
  public:
    int publications,cur_id;
    Professor(string name,int age,int pub,int id):Person(name,age){
      publications=pub;
      cur_id=id;
    }
    void getdata(){
      Person::getdata();
      cout<<"\nEnter Publications: ";
      cin>>publications;
      cout<<"\nEnter Current ID: ";
      cin>>cur_id;
    }
    void putdata(){
      Person::putdata();
      cout<<"\nPublications: "<<publications;
      cout<<"\nCurrent ID: "<<cur_id;
    }
};
class Student:public Person{
  public:
    int marks[5], id,sum;
    Student(string name,int age):Person(name,age){
      for(int i=0;i<5;i++){
        marks[i]=0;
      }
      id=0;
      sum=0;
    }
    void getdata(){
      Person::getdata();
      cout<<"\nEnter marks: ";
      for(int i=0;i<5;i++){
        cin>>marks[i];
        sum+=marks[i];
      }
      cout<<"\nEnter ID: ";
      cin>>id;
    }
    void putdata(){
      Person::putdata();
      cout<<"\nMarks: ";
      for(int i=0;i<5;i++){
        cout<<marks[i]<<" ";
      }
      cout<<"\nStudent ID: "<<id;
      cout<<"\nSum of Marks: "<<sum;
    }
};
int main() {
  string stname, profname;
  int publications, profid,sum,marks[5],profage,stdage;
  Student stud(stname, stdage);
  stud.getdata();
  Professor prof(profname,profage,publications,profid);
  prof.getdata();
  stud.putdata();
  prof.putdata();
}