int ledPin1 = 2;
int ledPin2 = 3;
int ledPin3 = 4;

boolean ledState1 = true;
boolean ledState2 = true;
boolean ledState3 = true;


int sensor1Pin = A0;
int sensor1Val;

int pot1Pin = A1;
int pot1Val;

void setup() {
  Serial.begin(9600);
 pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
 
sensor1Val=analogRead(sensor1Pin);
pot1Val = analogRead(pot1Pin);

Serial.print("light1: ");
Serial.println(sensor1Val);

Serial.print("pot: ");
Serial.println(pot1Val);

if(sensor1Val>0 && sensor1Val<341){
  

  digitalWrite(ledPin1, ledState1);

  }
  else if (sensor1Val>341 && sensor1Val<600){
    digitalWrite(ledPin2, ledState2);
    
    }
   else 
   {
    digitalWrite(ledPin3, ledState3);
   }
   }
  
