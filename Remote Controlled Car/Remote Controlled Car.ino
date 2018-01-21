#include <IRremote.h> //imports the IR Remote package that we downloaded
int RECV_PIN = 11; //sets the IR Receiver to pin 11
int relayPin = 10; //sets our relay to pin 10
boolean wheelsOn = LOW; //boolean that holds state of wheels
//the next two lines are ways we configure our IR receiver to receive 
//and have readable results
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
  {
    Serial.begin(9600); //to initialize the serial as a certain rate
    irrecv.enableIRIn(); //more set up for IR
    pinMode(relayPin,OUTPUT); //we set the relay pin as the output
  }
  
void loop() 
  {
    if (irrecv.decode(&results))//tests if we receieve code from remote
      {
      Serial.println(results.value, HEX); //writes the code into results into hexacode
        if(results.value == 0xFD00FF) //if the code is "0xFD00F" or the powerbutton
          {
              wheelsOn = !wheelsOn; //changes the state of the wheels
              digitalWrite(relayPin,wheelsOn); //writes the changed state to the relay
          }
        irrecv.resume(); //continues to resume the IR receiver
      }
  }
