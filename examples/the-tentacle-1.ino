#define ARDUINO_H
typedef unsigned char byte;
#include <StandardCplusplus.h>
#include <tentacle.h>
using namespace tentacle;
Tentacle t;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  std::vector<Pin> pins = t.getValue();
  for(int i = 0; i < pins.size(); i++) {
    if (i == 3) {
      Pin pin = pins[i];
      Serial.print("Pin #: ");
      Serial.print(pin.getNumber());
      Serial.print(" Value: ");
      Serial.print(pin.getValue() );
      Serial.print('\n');
    }
  }
}