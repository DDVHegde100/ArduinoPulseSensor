void loop() {  
  digitalWrite(trigger, HIGH);           
  delayMicroseconds(10);                        
  digitalWrite(trigger, LOW);                   
  TimeResponse = pulseIn(echo, HIGH);  
  distance2 = TimeResponse/58;  

  if (distance2 < MIN_DISTANCE) { 

    tone1 = 50.0*pow(2,(distance2/12.0));  
    pinMode(9, OUTPUT);
    NewTone(9,tone1);
  } else {
    pinMode(9, OUTPUT); 
    NewTone(9,0);
  }