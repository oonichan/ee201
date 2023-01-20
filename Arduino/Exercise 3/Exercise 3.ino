void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(13, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(13) == 1) {
    Serial.println("Hello World!");
  } else {
    Serial.println("It's 2023");
  }

}
