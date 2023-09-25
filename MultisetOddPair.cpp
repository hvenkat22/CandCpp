#include <iostream>
using namespace std;
bool canSplitPairs(int oddct, int evenct){
  return oddct==evenct;
}
bool canSplitPairs(int n, int arr[]){
  int odd=0, even=0;
  for(int i=0; i<2*n; i++){
    if(arr[i]%2==0){
      even++;
    }else{
      odd++;
    }
  }
  return canSplitPairs(odd,even);
};
int main() {
  int n;
  cout<<"Enter the integer n: "<<endl;
  cin>>n;
  int arr[2*n];
  cout<<"Enter the elements: "<<endl;
  for(int i=0; i<2*n; i++){
    cin>>arr[i];
  }
  if(canSplitPairs(n,arr)){
    cout<<"\nYES"<<endl;
  }else{
    cout<<"\nNO"<<endl;
  }
}