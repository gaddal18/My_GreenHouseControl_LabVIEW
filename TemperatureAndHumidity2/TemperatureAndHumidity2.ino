/*!
 * @file readDHT11.ino
 * @brief DHT11 is used to read the temperature and humidity of the current environment. 
 *
 * @copyright   Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @license     The MIT License (MIT)
 * @author [Wuxiao](xiao.wu@dfrobot.com)
 * @version  V1.0
 * @date  2018-09-14
 * @url https://github.com/DFRobot/DFRobot_DHT11
 */

#include <DFRobot_DHT11.h>
DFRobot_DHT11 DHT;
#define DHT11_PIN 8

#include <Buzzer.h>
//Buzzer buzzer(10, 12);

void setup(){
  Serial.begin(9600);
  //buzzer.begin(100);
}

void loop(){
  DHT.read(DHT11_PIN);
  Serial.print(DHT.temperature);
  Serial.print(",");
  Serial.println(DHT.humidity);
  /*if (DHT.humidity >= 50){
      //digitalWrite(LED, HIGH);
      buzzer.sound(NOTE_E7, 80);
      buzzer.sound(NOTE_E7, 80);
    }*/
  delay(1000);
}
