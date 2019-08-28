const int r = 13;
const int g = 11;
const int y = 12;


void setup() {
  
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(y, OUTPUT);
}

void loop() {


  digitalWrite(r, HIGH);
  digitalWrite(y, LOW);
  digitalWrite(g, LOW);
  delay(2000);

  digitalWrite(r, LOW);
  digitalWrite(y, LOW);
  digitalWrite(g, HIGH);
  delay(2000);
  digitalWrite(r, LOW);
  digitalWrite(y, HIGH);
  digitalWrite(g, LOW);
  delay(1000);

}