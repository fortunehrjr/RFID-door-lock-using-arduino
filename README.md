 # RFID-door-lock-using-arduino
This project was developed to create a reliable and secure means of security for doors at Caleb University, located in Lagos, Nigeria.

An automated door lock system usng NFC cards and arduino.

This is an RFID-based door locking gadget. This door lock system will give access to only those people who have the registered key card.
It uses a servo motor that operates with the help of Arduino. The Arduino board runs with complete programming that is stored inside it. 
By using this gadget, an owner can give permission to a specific set of people in a particular area. It is also very secure.
RFID Module, LCD Display, servo motor and Arduino have also been used in this door lock system.

# The aims of this project:
  This gadget was designed with the help of an Arduino using a servo motor that pushes the gear in the lock forward and back.
  When we scan a registered card, it takes instructions from the program and starts a loop in which the servo motor rotates 90 degrees,
  then the gear mechanism in it works, which locks and opens the door. In other words, when a card is scanned,
  the condition given in the programming matches, then the command given in that condition becomes active, 
  such that when the correct card is scanned, the open condition will match, in which the servo motor will rotate 90 degrees and
  the door is open otherwise the door will remain locked and the LCD will display ACCESS DENIED. In this program the servo motor 
  will return back to its original position after 6 seconds i.e., the door is automatically locked after 6 seconds.
  This system is normally used in hostels, schools, banks and large companies for security purposes because reliable.
  
  
# materials used in this project:
* Arduino UNO x 1

*	RFID module x 1 
 
*	Jumper Wires 

*	board 

*	LCD display x 1  

*	I2C module x 1  

*	Servo motor x 1 

*	Iron stick

*	glue 

*	tape 

*	door lock


# problems we encountered
  Few of the problems encountered was getting the materials in hand, because we didn’t have a reliable source to get all the required materials it
  slowed us down, but we eventually got a place to get all the required materials after discussing with our colleagues who also had the same problem.
  I guess a problem shared is a problem solved after all.
  Another problem we encountered was that the MFRC522(RFID reader) was not reading the key card it kept bringing the error “check your connection”,
  so we checked and saw that there was nothing wrong with it then after few hours of reasoning we realized that we didn’t install the MFRC522 library 
  on the computer used in programming the Arduino. So, we installed the MFRC522 BY GITHUB COMMUNITY, although this didn’t solve our problem but it was
  something that needed to be done as well, so what solved our problem? you may ask, it turns out that the jumper wired used in this project was rusted
  and as we all know rust is an insulator thus it does not allow electricity flow through it and that was the reason why the reader couldn’t read the cards.
  So, we scratched off the rust off every single jumper wire with a razor blade and then used alcohol wipes to wipe it off, and there you go problem solved.
  Another issue was with our LCD display, we needed to solder our LCD display to the I2C module but none of our group members had experience on how to solder
  so it was an issue, how we solved this was that when we went to get the materials, we paid people in the market with experience on how to solder to help us
  with it and it was done within few minutes. But after this was done our LCD wasn’t displaying what we needed it to display instead it was a blank screen, 
  so we tried to learn from our first problem and install a library, so we went ahead to install LIQUIDCRYSTAL I2C BY FRANK DE BRABANDER. And this was indeed 
  needed but didn’t solve our problem. We solved our problem by adjusting the potentiometer on the I2C 


# Name of Contributors
* Hosea-Ramon Fortune
* Agbeniga Al-ameen Temitope
* Abu David Idris
*	Ogunlaja iseoluwa azeezat
* nwadike david
*	EKWEGBALU NNAMDI EBUBE
*	Joshua Ayomide
*	Ezekwe Ifunanya
*	Ejeh Veronica ehi
* Delight Eze-Roberts
* Babatunde Sultan
*	Yahaya Abdulsamad Olalekan
* OMOSHOLA BUNMI OSHUNLETI
*	Fagbelu Stephen Oluwanifemi
*	Bello oreoluwa quam

Thank you for reading through this project.



