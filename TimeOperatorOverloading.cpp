#include <iostream>
using namespace std;
class Time{
  public:
    int hours,minutes,seconds;
    Time(int hrs, int mins, int sec){
      hours=hrs;
      minutes=mins;
      seconds=sec;
    }
    bool operator ==(Time t2){
      if(hours==t2.hours && minutes==t2.minutes && seconds==t2.seconds){
        return true;
      }
      return false;
    }
};
int main() {
  int whrs,wmins,wsec,chrs,cmins,csec;
  cout<<"Enter the Wrist Watch's Time: ";
  cin>>whrs>>wmins>>wsec;
  cout<<"\nEnter the Clock's Time: ";
  cin>>chrs>>cmins>>csec;
  Time watch(whrs,wmins,wsec),clock(chrs,cmins,csec);
  if(!(watch==clock)){
    cout<<"Clocks are showing different times.";
  }
  else if((whrs>24||chrs>24||wmins>60||wsec>60||chrs>24||cmins>60||csec>60)&&!(watch==clock)){
    cout<<"Invalid time format!";
    cout<<"Clocks are showing different times.";
  }else if((whrs>24||chrs>24||wmins>60||wsec>60||chrs>24||cmins>60||csec>60)&&(watch==clock)){
    cout<<"Invalid time format!";
    cout<<"\nBoth clocks are showing the same time";
  }else if(watch==clock){
    cout<<"\nBoth clocks are showing the same time";
  }
}