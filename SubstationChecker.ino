const int i = 500;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int analog0 = analogRead(0);
    delay(1000);
  int analog1 = analogRead(1);
    delay(1000);
  int analog2 = analogRead(2);
    delay(1000);
  int analog3 = analogRead(3);
    delay(1000);
  int analog4 = analogRead(4);
    delay(1000);
  int analog5 = analogRead(5);
    delay(1000);
  int analog6 = analogRead(6);
    delay(1000);
  int analog7 = analogRead(7);
    delay(1000);

  if(analog0 > i && analog1 > i)
    Serial.println("zero");
  delay(500);

  if(analog1 > i && analog2 > i)
      Serial.println("one");
  delay(500);

  if(analog2 > i && analog3 > i)
    Serial.println("two");
  delay(500);

  if(analog3 > i && analog4 > i)
    Serial.println("three");
  delay(500);

  if(analog4 > i && analog5 > i)
    Serial.println("four");
  delay(500);

  if(analog5 > i && analog6 > i)
    Serial.println("five");
  delay(500);

  if(analog6 > i && analog7 > i)
    Serial.println("six");
  delay(500);

  if(analog0 > i && analog7 > i)
    Serial.println("seven");
  delay(500);
}
