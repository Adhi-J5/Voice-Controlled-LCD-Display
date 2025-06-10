#include <LiquidCrystal.h>
#include <SoftwareSerial.h>
LiquidCrystal lcd(8,9,10,11,12,13);
SoftwareSerial BT(6,7);
void setup(){
lcd.begin(16,2);
BT.begin(9600);
lcd.print("voice on");

}


void loop() {

if (BT.available()) {
    String Cmd = BT.readStringUntil('\n');

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Command:");
    lcd.setCursor(0, 1);
    lcd.print(Cmd);  
    Serial.println(Cmd);
}


}
