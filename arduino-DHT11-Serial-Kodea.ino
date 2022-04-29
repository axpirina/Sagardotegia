/* Example sketch to read DHT sensor from Arduino Serial port
  This code is licensed under a Creative Commons Attribution 4.0 International license.
  modified by Axpi 2022
*/
#include <TimerOne.h>
#include <DHT.h>
 
#define DHTPIN 2
#define DHTTYPE DHT11
 
DHT dht(DHTPIN, DHTTYPE);

int h =0;
int t = 0;

void setup() {
  Serial.begin(1200);
  dht.begin();
  Timer1.initialize(1000000);      //Tenporizadorea 1sg
  Timer1.attachInterrupt(Tenporizatzailea) ; //Interrupzioa konfiguratu
}
void loop() {
  h = dht.readHumidity();
  t = dht.readTemperature();
  h=h+100;                    // Hezetasuna 100 etik gorako balioetan modulatua bidaliko da
}

void Tenporizatzailea (void)    // 1 sgko serial monitoretik Tº eta Hº balioak bidali
{ 
  Serial.println(h);
  Serial.println(t);
}
