#include<SoftwareSerial.h>
SoftwareSerial mySerial(9,10);
int count=0;
char input[12];
char check[12] = {'5','1','0','0','9','4','0','E','C','4','0','F'};
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  mySerial.begin(9600);
}

void loop() {
  if(mySerial.available()){
    count=0;
    while(mySerial.available() && count<12)
    {
      input[count]=mySerial.read();
      count++;
      delay(5);
    }
    boolean flag = 0;
    Serial.println(input);
  
    count=0;
   // Serial.print(check);
    for(int i=0;i<12;i++){
      if(check[i]!=input[i]){
        Serial.print("Access denied");
        flag=1;
        break;
      }
    }
    if(flag==0){
    Serial.print("Accepted");
    }
  }
}