#include <iostream>
using namespace std;
int main() {
  string str;
  int len;
  cout<<"Enter the length: ";
  cin>>len;
  cout<<"Enter the String: ";
  cin>>str;
  for(int i=0; i<len; i++){
    if(str[i]=='$' || str[i]=='&' || str[i]=='@' || str[i]=='*' || str[i]=='#'){
      str.erase(i,1);
    }
  }
  cout<<"\nThe entered string with special characters removed is: "<<str<<endl;
}