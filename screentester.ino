#include <TFT_eSPI.h>       // Hardware-specific library
#include "Free_Fonts.h"

TFT_eSPI tft = TFT_eSPI();  // Invoke custom library

// Include the header files that contain the icons
#include "qrimg.h"

long count = 0; // Loop count

void setup()
{
  Serial.begin(115200);
  tft.begin();
  tft.setRotation(1);  // landscape

  tft.fillScreen(TFT_BLACK);

  // Swap the colour byte order when rendering
  tft.setSwapBytes(true);

  // Draw the icons
  //tft.pushImage(0, 40, qrimgWidth, qrimgHeight, qrimg);
  //tft.pushImage(140, 100, alertWidth, alertHeight, alert);
  //tft.pushImage(180, 100, closeWidth, closeHeight, closeX);

  // Pause here to admire the icons!
  delay(2000);

}

void loop()
{

  tft.fillRect(0,0,320,77,0xD008); //y start, x start, height, width, color (color is 565 format)
  tft.fillRect(0,77,320,38,0x9A72);
  tft.fillRect(0,115,320,77,0x01D5);

  tft.setTextColor(TFT_WHITE);
  tft.setFreeFont(FSB12);
  tft.setCursor(120,230);
  tft.print("BISEXUAL");
  
  tft.setTextColor(TFT_WHITE);
  tft.setFreeFont(FSB12);
  tft.setCursor(120,230);
  tft.print("RAINBOW");

  tft.fillRect(0,0,320,32,0xD800);    // RED
  tft.fillRect(0,32,320,32,0xFDEB);   // ORANGE
  tft.fillRect(0,64,320,32,0xF7AC);   // YELLOW  
  tft.fillRect(0,96,320,32,0x6FED);   // GREEN
  tft.fillRect(0,128,320,32,0x6DFE);  // BLUE
  tft.fillRect(0,160,320,32,0xC35F);  // VIOLET

  // void fillFlag(int offset, int height, int width, int numOfRect){
  
  // }

  // tft.fillRect(0,0,320,77,0xF800); //y start, x start, height, width, color (color is 565 format)
  // tft.fillRect(0,77,320,38,0x9A72);
  // tft.fillRect(0,115,320,77,0x01D5);

  /*
  delay(2000);
  tft.pushImage(0, 40, qrimgWidth, qrimgHeight, qrimg);
  delay(2000);
  tft.pushImage(0, 40, qrimgWidth, qrimgHeight, qrimg2);
  delay(2000);
  tft.pushImage(0, 40, qrimgWidth, qrimgHeight, qrimg3);
  //delay(2000);
  tft.pushImage(0, 40, qrimgWidth, qrimgHeight, qrimg4);
  //delay(2000);
  */
}
