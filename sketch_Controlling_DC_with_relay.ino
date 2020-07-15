const int buttonPin1 = 5;
const int buttonPin2 = 6;

int relay1 = 2;
int relay2 = 3;

void setup() {

  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);

}

void loop() {
  if (digitalRead(buttonPin1) == HIGH){
    digitalWrite(relay1, HIGH); //For counterclockwise 
     }

  else if (digitalRead(buttonPin2) == HIGH){
    digitalWrite(relay2, HIGH); //For Clockwise 
     }

  else {
    digitalWrite(relay1, LOW);
    digitalWrite(relay2, LOW);
    }

}
