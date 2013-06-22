// Ejemplo del control de luces RGB de una cinta led analoga.

// Colobia Arduino 21/Jun/2013
// http://arduinocolombia.blogspot.com/


int RedPin = 6;    
int GreenPin = 3;    
int BluePin = 5;   

void setup()  { 
  // nothing happens in setup 
} 

void loop()  { 
  
         for(int BlueCont = 255 ; BlueCont >= 0; BlueCont -=5) { 
          // sets the value (range from 0 to 255):
          analogWrite(BluePin, BlueCont);         
          // wait for 30 milliseconds to see the dimming effect
          delay(100);
         }  
  
          analogWrite(RedPin, 0);
          analogWrite(GreenPin, 0);
          analogWrite(BluePin, 0);
  
         for(int BlueCont = 255 ; BlueCont >= 0; BlueCont -=5) { 
          // sets the value (range from 0 to 255):
          analogWrite(RedPin, BlueCont);         
          // wait for 30 milliseconds to see the dimming effect

          delay(100);

         }
          analogWrite(RedPin, 0);
          analogWrite(GreenPin, 0);
          analogWrite(BluePin, 0);
          
         for(int BlueCont = 255 ; BlueCont >= 0; BlueCont -=5) { 
          // sets the value (range from 0 to 255):
          analogWrite(GreenPin, BlueCont);         
          // wait for 30 milliseconds to see the dimming effect

          delay(100);

         }
        analogWrite(RedPin, 0);
        analogWrite(GreenPin, 0);
        analogWrite(BluePin, 0);
  
         for(int BlueCont = 255 ; BlueCont >= 0; BlueCont -=5) { 
          // sets the value (range from 0 to 255):
          analogWrite(RedPin, BlueCont); 
          analogWrite(GreenPin, BlueCont);        
          // wait for 30 milliseconds to see the dimming effect
        delay(100);

         }    
        analogWrite(RedPin, 0);
        analogWrite(GreenPin, 0);
        analogWrite(BluePin, 0);
  
        for(int BlueCont = 255 ; BlueCont >= 0; BlueCont -=5) { 
        // sets the value (range from 0 to 255):
        analogWrite(RedPin, BlueCont);
        analogWrite(GreenPin, BlueCont);
        analogWrite(BluePin, BlueCont);
         // wait for 30 milliseconds to see the dimming effect
        delay(100);
        }    
  
}

