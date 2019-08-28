#include<Servo.h>
Servo S;

int in=A0;
int out=9;
void setup() {
  pinMode(in,INPUT);
  pinMode(out,OUTPUT);
  Serial.begin(9600);
  S.attach(9);
 

}

void loop() {
  // put your main code here, to run repeatedly:
int x=analogRead(in);
Serial.println(x);
int thre=500;
if(x>thre)
{
  for(int i=0;i<180;i++)
  {
    S.write(i);
    delay(30);
  }
  for(int i=180;i>0;i--)
  {
    S.write(i);
    delay(30);
  }
}
delay(500);

}
