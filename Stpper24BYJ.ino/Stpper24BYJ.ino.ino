/* #18
================================================================================================================= 
* 8 steps Sequence 64*64 = 4096 stepsPerRevolution
Channel M&E Automation:https://bit.ly/3uz3Bt8
Vui lòng đăng ký kênh https://bit.ly/34a2of1 cảm ơn các bạn rất nhiều!
Danh sách phát Arduino : https://bit.ly/34BUDlU
=================================================================================================================
*/
enum {
  INIT,
  MOVE_CLOCK,
  MOVE_CLOCKWISE
} STEPPER_STATE;
int IN1= 8;
int IN2= 9;
int IN3= 10;
int IN4= 11;

int potentiometer = A0;
int Val_Analog,MotorSpeed;

int stepperState = MOVE_CLOCK;
//===============================================================================================================
void setup() 
{
Serial.begin(9600);  
pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);
// int Val_Analog = 535;
// int MotorSpeed = 0;
MotorSpeed = 900;
Serial.begin(9600);
}
//===============================================================================================================
void loop() 
{ 
    // Val_Analog = analogRead(potentiometer);
    //for(int i=0; i< 1500; i++) 
      //Forward_Reverse (false);
    //for(int i=0; i< 1500; i++) 
      // Forward_Reverse (true);
    // read the input on analog pin 0:
    int sensorValue = analogRead(A0);
    switch (stepperState) {
    case INIT:{
      if(sensorValue > 100) stepperState = MOVE_CLOCK;
    }
    break;
    case MOVE_CLOCK:{
      Forward_Reverse (true);
      if(sensorValue > 600) stepperState = MOVE_CLOCKWISE;
    }
    break;
    case MOVE_CLOCKWISE:{
      Forward_Reverse (false);
      if(sensorValue <= 140) stepperState = MOVE_CLOCK;
    }
    break;
    }
    // if(sensorValue > 100) Forward_Reverse (false);
    // else if(sensorValue > 800) Forward_Reverse (true);
    Serial.println(sensorValue);
    // delay(30);
  //   if (Val_Analog <= 535) 
  //  { MotorSpeed = (Val_Analog/30+1);
  //   Forward_Reverse (true);}
  //   else
  //   {MotorSpeed = ((1023-Val_Analog)/30+1);
  //   Forward_Reverse (false);}
 
}
//===============================================================================================================
void Forward_Reverse (bool dir)
{
    if(dir)
    {
  //1
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delayMicroseconds(MotorSpeed);
  //2
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delayMicroseconds(MotorSpeed);
  //3
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delayMicroseconds(MotorSpeed);
  //4
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  delayMicroseconds(MotorSpeed);
  //5
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
 delayMicroseconds(MotorSpeed);
  //6
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, HIGH);
  delayMicroseconds(MotorSpeed);
  //7
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  delayMicroseconds(MotorSpeed);
  //8
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  delayMicroseconds(MotorSpeed);
} 
  
  else{
    
  //1
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  delayMicroseconds(MotorSpeed);
  //2
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  delayMicroseconds(MotorSpeed);
  //3
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, HIGH);
  delayMicroseconds(MotorSpeed);
  //4
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
 delayMicroseconds(MotorSpeed);
 //5
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  delayMicroseconds(MotorSpeed);
  //6
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delayMicroseconds(MotorSpeed);
  //7
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delayMicroseconds(MotorSpeed);
//8
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delayMicroseconds(MotorSpeed);
 
  }
}
//=============================================== END =========================================================
