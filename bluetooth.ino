#include <SoftwareSerial.h>

SoftwareSerial miBT(0,1);

void setup() {

  Serial.begin(9600);
  Serial.println("Listo");
  miBT.begin(38400);

}

void loop() {
  if(miBT.available())
  {
  Serial.write(miBT.read());    //LEE BT Y ENVIA A ARDUINO
  }

  if (Serial.available())
  {
    miBT.write(Serial.read()); //lee arduino y envia a BT
  }
  


  
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
