void setup() {
  // put your setup code here, to run once:
    pinMode(9,OUTPUT); // set pin 9 to OUTPUT
    Serial.begin(9600); // set serial baud rate to 9600
}

void loop() {
  // put your main code here, to run repeatedly:
  
    if(Serial.available()){
        int led = Serial.parseInt(); // Get int value through Serial 
        Serial.setTimeout(86400000); // set serial timeout value to 86400000 ms 24 hour
        Serial.print("LED değeri: "); Serial.println(led); // print serial the led brightness
        analogWrite(9,led); // set pin's pwm to desired led brightness 
        
    }
}