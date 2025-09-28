//int water; //random variable 
void setup() {
  pinMode(8,OUTPUT); //output pin for relay board, this will sent signal to the relay
  pinMode(6,INPUT); //input pin coming from soil sensor
}

void loop() { 
  int water = digitalRead(6);  // reading the coming signal from the soil sensor
  if(water == HIGH) // if water level is full then cut the relay 
  {
  digitalWrite(8,LOW); // LOW  is to turn on  the relay
  }
  else
  {
  digitalWrite(8,HIGH); //HIGH is to turn OFF relay 
  }
  delay(400); 
}






































































































  
  
