#include <Arduino.h>

// Выводы для сегментов A–G
const int led2 = 2;  // A
const int led3 = 3;  // B
const int led4 = 4;  // C
const int led5 = 5;  // D
const int led6 = 6;  // E
const int led7 = 7;  // F
const int led8 = 8;  // G

void setup() {
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
    pinMode(led5, OUTPUT);
    pinMode(led6, OUTPUT);
    pinMode(led7, OUTPUT);
    pinMode(led8, OUTPUT);
}

void loop() {
    // Включаем сегменты по очереди (бегущий огонь)
    for (int i = 2; i <= 8; i++) {
        digitalWrite(i, HIGH);
        delay(200);
    }
    for (int i = 8; i >= 2; i--) {
        digitalWrite(i, LOW);
        delay(200);
    }
}