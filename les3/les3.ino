void setup() {
    pinMode(3, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    Serial.begin(115200);
}

void loop() {
    int ldr = analogRead(A0);

    digitalWrite(3, ldr < 500 ? HIGH : LOW);
    digitalWrite(5, (ldr >= 500 && ldr < 700) ? HIGH : LOW);
    digitalWrite(6, ldr >= 700 ? HIGH : LOW);

    Serial.println(ldr);
    delay(500);
}
