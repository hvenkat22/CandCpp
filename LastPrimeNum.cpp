#include <iostream>
using namespace std;
int main() {
  int num,count=0;
  cout<<"Input the number: ";
  cin>>num;
  for( int i=num-1;i>=1;i--)
  {
   for(int j=2;j<i;j++)
      {
       if(i%j==0)
       count++;
       }
    if(count==0){
      if(i==1)
       {
       cout<<"no prime number less than 2";
       break;
     }
      cout<<i<<" is the last prime number before entered number";
       break;
       }
       count=0;
}+
}