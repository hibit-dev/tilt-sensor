#define TILT_PIN 2

byte isTilted = LOW;

void setup()
{
  pinMode(TILT_PIN, INPUT_PULLUP);

  Serial.begin(115200);
}

void loop()
{
  isTilted = isSensorTilted(TILT_PIN);

  if (isTilted) {
    Serial.println("Is tilted");
  }

  delay(100); // Small delay between readings
}

bool isSensorTilted(int pin)
{
  return digitalRead(pin) == HIGH;
}
