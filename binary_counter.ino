int pin1=8;
int pin2=9;
int pin3=10;
int pin4=11;
int dt=1800;

void setup() {
  // put your setup code here, to run once:
  pinMode (pin1,OUTPUT);
  pinMode (pin2,OUTPUT);
  pinMode (pin3,OUTPUT);
  pinMode (pin4,OUTPUT);
    
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin1,LOW);//number 0
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  delay(dt);

  digitalWrite(pin1,LOW);//number 1
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  delay(dt);

  digitalWrite(pin1,LOW);//number 2
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
  delay(dt);

  digitalWrite(pin1,LOW);//number 3
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  delay(dt);

  digitalWrite(pin1,LOW);//number 4
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  delay(dt);
  
  digitalWrite(pin1,LOW);//number 5
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
  delay(dt);

  digitalWrite(pin1,LOW);//number 5
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  delay(dt);

  digitalWrite(pin1,HIGH);//number 6
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  delay(dt);

  digitalWrite(pin1,HIGH);//number 7
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  delay(dt);

  digitalWrite(pin1,HIGH);//number 8
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
  delay(dt);
  
  digitalWrite(pin1,HIGH);//number 9
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  delay(dt);

  digitalWrite(pin1,HIGH);//number 10
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  delay(dt);

  digitalWrite(pin1,HIGH);//number 11
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  delay(dt);

  digitalWrite(pin1,HIGH);//number 12
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  delay(dt);  

  digitalWrite(pin1,HIGH);//number 13
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  delay(dt);
  delay(2400);
}
