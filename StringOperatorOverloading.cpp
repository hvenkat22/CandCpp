#include <iostream>
using namespace std;
class StringCmp{
  private:
    string str;
  public:
    StringCmp(string st){
      str=st;
    }
    bool operator ==(StringCmp str2){
      return str==str2.str;
    }
};
int main() {
  string str1,str2;
  cout<<"Enter String 1: ";
  cin>>str1;
  cout<<"\nEnter String 2: ";
  cin>>str2;
  StringCmp cmp1(str1),cmp2(str2);
  if(str1==str2){
    cout<<"\nThe Strings are equal.";
  }else{
    cout<<"\nThe Strings are not equal.";
  }
  return 0;
}