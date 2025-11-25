#include <Arduino.h>

// LED pin on the ESP32
const uint8_t LED_PIN = 22;

void setup() {
	// initialize the digital pin as an output.
	pinMode(LED_PIN, OUTPUT);
	digitalWrite(LED_PIN, LOW);
}

void loop() {
	// Blink at 1 Hz: 0.5s ON, 0.5s OFF
	digitalWrite(LED_PIN, HIGH);
	delay(500);
	digitalWrite(LED_PIN, LOW);
	delay(500);
}