#include <SoftwareSerial.h>

SoftwareSerial mySerial(5, 4); // RX, TX

void setup() {

Serial.begin(9600);
Serial.println("To setup Bluetooth Uploading");
Serial.println("---------------------------");
Serial.println("AT+NAME=ArdunioBT");
Serial.println("AT+PSWD=1234");
Serial.println("AT+ROLE=0");
Serial.println("AT+POLAR=1,0");
Serial.println("AT+UART=115200,0,0");
Serial.println("---------------------------");
Serial.println("Enter AT commands:");

 
mySerial.begin(38400);

}

void loop()
{
if (mySerial.available())
  Serial.write(mySerial.read());
if (Serial.available())
  mySerial.write(Serial.read());
}