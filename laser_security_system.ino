const int buzzerPin = 9; //Digital pin 9
const int ldrPin = A0; // Analog pin A0


void setup() {
Serial.begin(9600);
pinMode(buzzerPin, OUTPUT);
pinMode(ldrPin, INPUT);

}

void loop(){
int ldrStatus = analogRead(ldrPin);
if (ldrStatus <= 800) {
digitalWrite(buzzerPin, LOW); //if there is no object between laser and ldr then the buzzer will remain silent
Serial.println(ldrStatus);
}
else {
digitalWrite(buzzerPin, HIGH); //if there is an object between laser and ldr then the buzzer will turn on
Serial.println(ldrStatus);

}

}
