
int isik = A0;

void setup() {
  pinMode(isik,INPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  geceLambasi();

}

void geceLambasi() {
  if(analogRead(isik) < 278){
    digitalWrite(9,HIGH);
  }
  else{
    digitalWrite(9,LOW);
  }
  Serial.println(analogRead(isik));
}
