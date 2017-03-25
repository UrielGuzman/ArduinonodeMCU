int s1=1;
int s2=2;
#include <SoftwareSerial.h>

SoftwareSerial sw(2, 3);

void setup() {
  Serial.begin(115200);
  Serial.println("Breavers");
  sw.begin(115200);
}

void loop() {
  
  int pre=analogRead(A5);
  int fle=analogRead(A0);
  
  Serial.print("Presion ;");
  Serial.print(pre);
  Serial.println();
  
  sw.print("Sensor Presion");
  sw.print(s1);
  sw.print("Presion :");
  sw.print(pre);
  sw.println();

  Serial.print("Flexion ;");
  Serial.print(fle);
  Serial.println();
  
  sw.print("Sensor Flex");
  sw.print(s2);
  sw.print("Presion :");
  sw.print(fle);
  sw.println();
  delay(1000);
}
