int ch1Pin = 3;  // Input pin connected to receiver channel
unsigned long duration;

void setup() {
  Serial.begin(9600);
  pinMode(ch1Pin, INPUT);
}

void loop() {
  duration = pulseIn(ch1Pin, HIGH);  // Measure pulse width in microseconds
  Serial.println(duration);          // Typically between 1000 and 2000 µs
  delay(50);                         // Update roughly every frame
}