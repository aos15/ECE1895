// This is Isaiah's Branch

int isPressed = 0;

void setup() {

  pinMode(7, OUTPUT);
  pinMode(8, INPUT);
}

void loop() {

  isPressed = digitalRead(8);

  if (isPressed == LOW) {

    digitalWrite(7, HIGH);  
    delay(1000);                    
    digitalWrite(7, LOW);  
    delay(1000);                      
  }
}
