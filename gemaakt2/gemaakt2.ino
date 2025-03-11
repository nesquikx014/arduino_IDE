void setup() {
    Serial.begin(115200);
    pinMode(D3, OUTPUT);
    pinMode(D5, OUTPUT);
    pinMode(D6, OUTPUT);
}

void loop() {
    int A = random(999);
    int B = random(999);
    int C = random(999);
    int D = random(999);

    Serial.print("A: "); Serial.print(A);
    Serial.print(" B: "); Serial.print(B);
    Serial.print(" C: "); Serial.print(C);
    Serial.print(" D: "); Serial.println(D);

    if (A > B || A < C) {
        digitalWrite(D3, HIGH);
    } else {
        digitalWrite(D3, LOW);
    }

    if (C > A && A < B) {
        digitalWrite(D5, HIGH);
    } else {
        digitalWrite(D5, LOW);
    }

    if (B > C && B > A && C < A) {
        digitalWrite(D6, HIGH);
    } else {
        digitalWrite(D6, LOW);
    }

    if (D > A && D > B && D > C) {
        for (int i = 0; i < 10; i++) {
            digitalWrite(D3, HIGH);
            digitalWrite(D5, HIGH);
            digitalWrite(D6, HIGH);
            delay(100);
            digitalWrite(D3, LOW);
            digitalWrite(D5, LOW);
            digitalWrite(D6, LOW);
            delay(100);
        }
    }

    delay(10000); // Wacht 10 seconden
}
