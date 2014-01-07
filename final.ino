const int  buttonPin = 2;    
const int ledPin = 13;       


int buttonPushCounter = 0;   
int buttonState = 0;         
int lastButtonState = 0;  
int val = 0;

void setup() {
 
  pinMode(buttonPin, INPUT);
  
  pinMode(ledPin, OUTPUT);
  
  Serial.begin(9600);
}


void loop() {
  
  buttonState = digitalRead(buttonPin);

 
  if (buttonState != lastButtonState) {
    
    if (buttonState == HIGH) {
     
      buttonPushCounter++;
     
      Serial.println(buttonPushCounter);
    }
    else {
      
      Serial.println(" ");
    }
  }
  
  lastButtonState = buttonState;
  val=buttonPushCounter;
  
  
}

  digitalWrite(ledPin, HIGH);  
  delay(val);                  
  digitalWrite(ledPin, LOW);   
  delay(val);
 


