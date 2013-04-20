#include <Servo.h> 

const int motor = 8;
int sensorValue;

Servo myservo;  // create servo object to control a servo

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  
  myservo.attach(motor);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  sensorValue = analogRead(A0);
  // scale it to use it with the servo (value between 0 and 180) 
  sensorValue = map(sensorValue, 0, 1023, 0, 179);
  myservo.write(sensorValue);
  
  // print out the value you read
  Serial.println(sensorValue);
  // delay in between reads for stability
  delay(100);
}




