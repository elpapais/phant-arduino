#include <Phant.h>

// Arduino example stream
// http://data.sparkfun.com/streams/VGb2Y1jD4VIxjX3x196z
// host, public key, private key
Phant phant("data.sparkfun.com", "VGb2Y1jD4VIxjX3x196z", "9YBaDk6yeMtNErDNq4YM");

void setup() {
  Serial.begin(9600);
}

void loop() {

  phant.add("val1", "help");
  phant.add("val2", 22);
  phant.add("val3", 0.1234);

  Serial.println(phant.url());

  Serial.println(phant.get());

  delay(2000);

}

