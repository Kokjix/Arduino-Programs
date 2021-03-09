const int INA = 7;
const int INB = 6;
const int INC = 5;
const int IND = 4;
const int ENB = 9;
void setup() {
 pinMode(INA,OUTPUT);
 pinMode(INB,OUTPUT);
 pinMode(INC,OUTPUT);
 pinMode(IND,OUTPUT);
 pinMode(ENB,OUTPUT);

}

void loop() {
  analogWrite(ENB,130);
  digitalWrite(INA,HIGH);
  digitalWrite(INB,LOW);
  digitalWrite(INC,HIGH);
  digitalWrite(IND,LOW);

}
