void setup() {
  // put your setup code here, to run once:
  for (int i = 6; i <= 9; i++) {
    pinMode(i, OUTPUT);
  }

  for (int i = 11; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.begin(9000);

  // 9
  digitalWrite(6, LOW); // a
  digitalWrite(7, LOW); // b
  digitalWrite(8, LOW); // c
  digitalWrite(9, HIGH); // d
  digitalWrite(11, HIGH); // e
  digitalWrite(12, LOW); // f
  digitalWrite(13, LOW); // g
  delay(1500);

  // 8
  digitalWrite(6, LOW); // a
  digitalWrite(7, LOW); // b
  digitalWrite(8, LOW); // c
  digitalWrite(9, LOW); // d
  digitalWrite(11, LOW); // e
  digitalWrite(12, LOW); // f
  digitalWrite(13, LOW); // g
  delay(1500);

  // 7
  digitalWrite(6, LOW); // a
  digitalWrite(7, LOW); // b
  digitalWrite(8, LOW); // c
  digitalWrite(9, HIGH); // d
  digitalWrite(11, HIGH); // e
  digitalWrite(12, HIGH); // f
  digitalWrite(13, HIGH); // g
  delay(1500);

  // 6
  digitalWrite(6, LOW); // a
  digitalWrite(7, HIGH); // b
  digitalWrite(8, LOW); // c
  digitalWrite(9, LOW); // d
  digitalWrite(11, LOW); // e
  digitalWrite(12, LOW); // f
  digitalWrite(13, LOW); // g
  delay(1500);

  // 5
  digitalWrite(6, LOW); // a
  digitalWrite(7, HIGH); // b
  digitalWrite(8, LOW); // c
  digitalWrite(9, LOW); // d
  digitalWrite(11, HIGH); // e
  digitalWrite(12, LOW); // f
  digitalWrite(13, LOW); // g
  delay(1500);

  // 4
  digitalWrite(6, HIGH); // a
  digitalWrite(7, LOW); // b
  digitalWrite(8, LOW); // c
  digitalWrite(9, HIGH); // d
  digitalWrite(11, HIGH); // e
  digitalWrite(12, LOW); // f
  digitalWrite(13, LOW); // g
  delay(1500);

  // 3
  digitalWrite(6, LOW); // a
  digitalWrite(7, LOW); // b
  digitalWrite(8, LOW); // c
  digitalWrite(9, LOW); // d
  digitalWrite(11, HIGH); // e
  digitalWrite(12, HIGH); // f
  digitalWrite(13, LOW); // g
  delay(1500);

  // 2
  digitalWrite(6, LOW); // a
  digitalWrite(7, LOW); // b
  digitalWrite(8, HIGH); // c
  digitalWrite(9, LOW); // d
  digitalWrite(11, LOW); // e
  digitalWrite(12, HIGH); // f
  digitalWrite(13, LOW); // g
  delay(1500);

  // 1
  digitalWrite(6, HIGH); // a
  digitalWrite(7, LOW); // b
  digitalWrite(8, LOW); // c
  digitalWrite(9, HIGH); // d
  digitalWrite(11, HIGH); // e
  digitalWrite(12, HIGH); // f
  digitalWrite(13, HIGH); // g
  delay(1500);

  // 0
  digitalWrite(6, LOW); // a
  digitalWrite(7, LOW); // b
  digitalWrite(8, LOW); // c
  digitalWrite(9, LOW); // d
  digitalWrite(11, LOW); // e
  digitalWrite(12, LOW); // f
  digitalWrite(13, HIGH); // g
  delay(1500);
}
