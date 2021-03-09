boolean on = false;


void setup() {
  // put your setup code here, to run once:
pinMode(7,INPUT);
pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(7)== HIGH){
    if(on == true){
      on = false;
    } else{
      on = true;
    }
  }
  
  if(on == true){
    digitalWrite(8,HIGH);
  }

    if(on == false){
    digitalWrite(8,LOW);
  }

}
