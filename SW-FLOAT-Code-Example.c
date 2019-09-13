// Arduino Code Example

int ledPin = 10;         // LED Indicator
int level_sensor = 7;    // Level Switch
int status = 0;          // variable for reading the pin status

void setup() {
  pinMode(ledPin, OUTPUT);         // declare LED pin as output
  pinMode(level_sensor, INPUT);    // declare levelSensor pin as input
}

void loop()
{
  status = digitalRead(level_sensor);      // read input value
  if (status == LOW)                       // check if the input 
    {    
    digitalWrite(ledPin, HIGH);         // Turn LED ON 
    } else                                    
    {
    digitalWrite(ledPin, LOW);          // Turn LED OFF
  }
}
