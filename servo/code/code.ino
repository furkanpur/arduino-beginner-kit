/*
 *    Turgut Ozal Universitesi
 *    Robotik ve Bilgisayar Destekli Uretim Kulübü
 *
 *    Joystick ile 2 adet servo motorun kontrolu
 *
 *    Sezai Furkan Pür & Mustafa Özcan
 */

//Servo kutuphanesini include ettik
#include <Servo.h>

//Servo sınıfından  
Servo servo1, servo2; 

//Analog 0 ve Analog 1'den verileri al
int xAxis = A0;
int yAxis = A1;

int x, y;

//Serial Port 7 ve 8'i aktif et
void setup()
{
  servo1.attach(7);
  servo2.attach(8); 
}

void loop()
{
  x = xAxis;  //Loop'un içinde x axis'ini surekli al
  y = yAxis;  //Loop'un içinde y axis'ini surekli al
  
  /**         //x ve y axis'lerini ekrana yaz
  
  Serial.print("x axis : ");  
  Serial.print(xAxis,DEC);
  Serial.print(" y axis : ");
  Serial.print(yAxis,DEC);
  Serial.print("\n");
  
  **/
  
  x = map(analogRead(xAxis), 0, 1023, 900, 2100);  //Analog'dan okuduğun verilere gore 900/2100 arasında olceklendirme yap
  y = map(analogRead(yAxis), 0, 1023, 900, 2100);  //Analog'dan okuduğun verilere gore 900/2100 arasında olceklendirme yap
  
  servo1.write(x);  //Servo motorunun pozisyonunu ayarla
  servo2.write(y);  //Servo motorunun pozisyonunu ayarla
  delay(15);        //Servoları ayarlamak icin gecikme kullan

}
