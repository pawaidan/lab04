#include <stdio.h>
#include <wiringPi.h>

int main(int argc, char *argv[])
{
  wiringPiSetup () ;
  pinMode(0, INPUT);
  pinMode (1, OUTPUT);
  while(1) {
    printf("Waiting for reset\n");
    while(digitalRead(0) == 1){
      digitalWrite(1,LOW);
    }
    printf("Waiting for event\n");
    while(digitalRead(0) == 0){
      digitalWrite (1, HIGH);
      printf("Alarm\n");
    }
 }
  /*NOTREACHED*/
  return 0 ;
}
