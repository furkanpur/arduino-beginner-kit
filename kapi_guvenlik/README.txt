/*
 *    Turgut Ozal Universitesi
 *    Robotik ve Bilgisayar Destekli Uretim Kulubu
 *
 *    Kapi Guvenlik Sistemi
 *
 *    Sezai Furkan Pur & Mustafa Ozcan
 */

MALZEMELER                              ADET
-----------------------------------     ------
1. 16x2 LCD Display + I2C Converter     1 Adet
2. Buzzer                               1 Adet
3. LED                                  2 Adet
4. Arduino Uno R3                       1 Adet
5. RFID Modulu                          1 Adet

KURULUM
----------------------------------------------
1. RFID-RC522 Modulu Baglanti Pin Girisleri
    Reset 	> 	Pin 5
    SDA 	> 	Pin 10
    MOSI 	> 	Pin 11
    MISO 	> 	Pin 12
    SCK 	> 	Pin 13
    Ground 	> 	Ground
    3.3 V 	> 	3.3 V

2. 16x2 LCD Display Modulunde I2C Converter'i vardir. Converter'in baglanti pinleri su sekildedir:
	VCC		>	5 V 
	Ground  >	Ground
	SDA		>	A4
	SCL		>	A5

3. Buzzer Baglanti Pinleri
	+		>	Pin 2
	-		>	Ground

4. LED Baglanti Pinleri
	+		>	Pin 3
	-		>	Ground

	+		>	Pin 4
	-		>	Ground


NOT: Sablonumuzun son hali Fritzing Projesi olarak ektedir.