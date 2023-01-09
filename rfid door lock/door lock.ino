#include <SPI.h> // This library allows you to communicate with SPI devices, with the Arduino as the controller device
#include <MFRC522.h> //  This library allows you access the rfid reader
#include <Servo.h> // this allows you access the servo motor
#include <LiquidCrystal_I2C.h> // this allows you access the LCD display

// without these libaries this system cannot function

 
#define SS_PIN 10
#define RST_PIN 9

#define SERVO_PIN 3
Servo myservo;
LiquidCrystal_I2C lcd(0x27, 16, 2);

#define ACCESS_DELAY 2000
#define DENIED_DELAY 1000
MFRC522 mfrc522(SS_PIN, RST_PIN);   // Create MFRC522 instance.

 
void setup() 
{
  Serial.begin(9600);   // Initiate a serial communication
  SPI.begin();          // Initiate  SPI bus
  mfrc522.PCD_Init();   // Initiate MFRC522
 lcd.init();
  lcd.backlight();
  myservo.attach(SERVO_PIN);
  myservo.write( 70 );
  delay(7500);
  myservo.write( 0 );
  Serial.println("Put your card to the reader...");
  lcd.print("Put your card");
  Serial.println();

}
void loop() 
{
  // Look for new cards
  if ( ! mfrc522.PICC_IsNewCardPresent()) 
  {
    lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("put in your card"); 
    return;
  }
  // Select one of the cards
  if ( ! mfrc522.PICC_ReadCardSerial()) 
  {
    lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("scanning"); 
    return;
  }
   
  //Show UID on serial monitor
  Serial.print("UID tag :");
  String content= "";
  byte letter;
  for (byte i = 0; i < mfrc522.uid.size; i++) 
  {
     Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
     Serial.print(mfrc522.uid.uidByte[i], HEX);
     content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
     content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  Serial.print("Message : ");
  content.toUpperCase();
  if (content.substring(1) == "81 34 4B 26" || content.substring(1) == "30 64 9E 0C") //change here the UID of the card
  {
    lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Door is unlocked"); 
    Serial.println("Authorized access\n welcome");
    Serial.println();
   myservo.write( 90 );
 delay(6000);
  myservo.write( 0 );
lcd.print("Door is locked");  

  }
 
 else   {
   lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Access denied"); 
    Serial.println(" Access denied");
 

    delay(DENIED_DELAY);

 
  }
}
