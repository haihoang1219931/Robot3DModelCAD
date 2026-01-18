/* #18
================================================================================================================= 
* 8 steps Sequence 64*64 = 4096 stepsPerRevolution
Channel M&E Automation:https://bit.ly/3uz3Bt8
Vui lòng đăng ký kênh https://bit.ly/34a2of1 cảm ơn các bạn rất nhiều!
Danh sách phát Arduino : https://bit.ly/34BUDlU
=================================================================================================================
*/
int IN1= 8;
int IN2= 9;
int IN3= 10;
int IN4= 11;

int potentiometer = A0;
int Val_Analog,MotorSpeed;

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
}
//===============================================================================================================
void loop() 
{ 
    // Val_Analog = analogRead(potentiometer);
    for(int i=0; i< 1500; i++) 
      Forward_Reverse (false);
    for(int i=0; i< 1500; i++) 
      Forward_Reverse (true);
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
