int sensorPin = 2;   // Button simulating IR OUT
int ledPin = 3;       
int sensorValue = 0;

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensorValue = digitalRead(sensorPin);

  if (sensorValue == HIGH) { // Button pressed = Object detected
    Serial.println("🚨 Object Detected!");
    digitalWrite(ledPin, HIGH);
  } else {
    Serial.println("Clear");
    digitalWrite(ledPin, LOW);
  }

  delay(200);
}
