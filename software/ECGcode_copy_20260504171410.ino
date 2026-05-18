void setup() 
{
  // Initialize the serial communication:
  Serial.begin(9600);
  pinMode(14, INPUT); // Setup for leads off detection LO + (Pin D5)
  pinMode(12, INPUT); // Setup for leads off detection LO - (Pin D6)
}
 
void loop() {
  // FIXED: Changed pins 10 and 11 to match your setup pins 14 and 12
  if((digitalRead(14) == 1) || (digitalRead(12) == 1)){
    Serial.println('!');
  }
  else{
    // Send the value of analog input 0:
    Serial.println(analogRead(A0));
  }
  // Wait for a bit to keep serial data from saturating
  delay(1);
}
