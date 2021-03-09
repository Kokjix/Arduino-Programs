#include <ArduinoJson.h>

#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>

// Set these to run example.
#define FIREBASE_HOST "poyo-a2945.firebaseio.com"
#define FIREBASE_AUTH "8MauQhsGkHd9eXfQxe8P3eiIJWjuAHZhtOgnaUuk"

#define WIFI_SSID     "DAM"
#define WIFI_PASSWORD "Dam20161"


String fireStatus = "";                                                    
int led = D1;       

// for external led
void setup() {
  Serial.begin(115200);
  
  pinMode(led, OUTPUT); 

  wifiConnect();
  
  firebaseConnect();
                             
}

void loop() {
  //Firebase.setInt("setInt", 34);

  int veri = Firebase.getInt("setInt");
  Serial.println(veri);
    fireStatus = Firebase.getString("Masa");                                      
  
  if (fireStatus == "ON") {                                                          
    Serial.println("Masa ON");
    Firebase.setString("Baglanti_testi", "Acik");                                                                      
    digitalWrite(led, HIGH);                                                         
  } 
  
  else if (fireStatus == "OFF") {                                                  
    Serial.println("Masa OFF");    
    Firebase.setString("Baglanti_testi", "Kapali");
    digitalWrite(led, LOW);                                                         
  }
  else {
    Serial.println("Wrong Credential! Please send ON/OFF");
  }
}

void wifiConnect(){              
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);                                      
  Serial.print("WiFi baglantisi yapiliyor ");
  Serial.print(WIFI_SSID);
  
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(200);
  }
  
  Serial.println();
  Serial.print("Baglanti yapildi: ");
  Serial.println(WIFI_SSID);
  Serial.print("IP Address : ");
  Serial.println(WiFi.localIP());  
}

void firebaseConnect(){
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);    
}

void stringAlmaGonderme(){
  

}
