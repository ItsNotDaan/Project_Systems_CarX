/*
  Name: 
  Date: 
  Author: Daan Heetkamp
  
  Description:
  
  Revision: 
 
*/
#include <Servo.h>
#include <Arduino.h>

Servo myservo;


//MOTOR 1
//#define MOTOR_A1_PIN  50 //7
//#define MOTOR_B1_PIN 48 //8

//#define PWM_MOTOR_1  44 //5

//#define EN_PIN_1 A15 //A0

#define MOTOR_A1_PIN  7
#define MOTOR_B1_PIN 8

#define PWM_MOTOR_1  5

#define EN_PIN_1 A0


 
void setup() 
{   
  Serial.begin(9600);              // Initiates the serial to do the monitoring 
  
  pinMode(MOTOR_A1_PIN, OUTPUT);
  pinMode(MOTOR_B1_PIN, OUTPUT);

  pinMode(PWM_MOTOR_1, OUTPUT);

  pinMode(EN_PIN_1, OUTPUT);

  digitalWrite(EN_PIN_1, HIGH);
  digitalWrite(MOTOR_A1_PIN, LOW); 
  digitalWrite(MOTOR_B1_PIN, HIGH);

  myservo.attach(10);

}

// Main loop
void loop() 
{
  
   analogWrite(PWM_MOTOR_1, 60); 
   

    sturen(90);
    delay(1000);
    sturen(180);
    delay(1000);
    sturen(135);
    delay(1000);


}

void sturen(int graden)
{
  if(myservo.attached()) myservo.write(graden);
  else Serial.println("is hier");
}
