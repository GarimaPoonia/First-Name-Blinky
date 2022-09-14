/*
   First Name Blinky
*/
//int LED = 12;   
int LETTER_SPACE = 2000;   //taking a delay of 2 seconds between each letter of name
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 12 of arduino nano as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void dot()      //LED glows for 1sec when dot is called
{
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  delay(1000);
}

void dash()    //LED glows for 3 sec when dash is called
{
  digitalWrite(12, HIGH);     //for dash, delay is 3 times of dot
  delay(3000);
  digitalWrite(12, LOW);
  delay(1000); 
}

// the loop function runs over and over again forever
void loop() {          //blinks my first name GARIMA in morse code repeatedly
  //G
  dash();
  dash();
  dot();
  delay(LETTER_SPACE);   //delays for 2 seconds before next letter
  //A
  dot();
  dash();
  delay(LETTER_SPACE);
  //R
  dot();
  dash();
  dot();
  delay(LETTER_SPACE);
  //I
  dot();
  dot();
  delay(LETTER_SPACE);
  //M
  dash();
  dash();
  delay(LETTER_SPACE);
  //A
  dot();
  dash();
  delay(LETTER_SPACE);
}
