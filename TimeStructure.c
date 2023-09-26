#include <stdio.h>
struct Time{
  int hours;
  int minutes;
  int seconds;
};
struct Time addtime(struct Time t1, struct Time t2){
  struct Time addition;
  addition.hours = t1.hours + t2.hours;
  addition.minutes = t1.minutes + t2.minutes;
  addition.seconds = t1.seconds + t2.seconds;
  return(addition);
}
int main(void) {
  struct Time time1;
  struct Time time2;
  struct Time adding;
  printf("\n\nEnter time 1 details: ");
  printf("\nEnter time 1 hours: ");
  scanf("%d",&time1.hours);
  if(time1.hours >=24){
    printf("\nEntered time 1: 00:00:00");
  } else{
    printf("\nEnter time 1 minutes: ");
    scanf("%d",&time1.minutes);
    printf("\nEnter time 1 seconds: ");
    scanf("%d",&time1.seconds);
    printf("Entered time 1: ");
    printf("%d:%d:%d\n",time1.hours,time1.minutes,time1.seconds);
  }
  printf("\n\nEnter time 2 details: ");
  printf("\nEnter time 2 hours: ");
  scanf("%d",&time2.hours);
  if(time2.hours >=24){
    printf("\nEntered time 2: 00:00:00");
  } else{
    printf("\nEnter time 2 minutes: ");
    scanf("%d",&time2.minutes);
    printf("\nEnter time 2 seconds: ");
    scanf("%d",&time2.seconds);
    printf("Entered time 2: ");
    printf("%d:%d:%d\n",time2.hours,time2.minutes,time2.seconds);
  }
  adding = addtime(time1,time2);
  printf("\nAdding the two timings gives the following result: ");
  printf("%d:%d:%d",adding.hours,adding.minutes,adding.seconds);
  return 0;
}
