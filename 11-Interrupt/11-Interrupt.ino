int i;



void setup(){
	pinMode(2,OUTPUT);
	pinMode(14,INPUT);
//  attachInterrupt(digitalPinToInterrupt(3), count, RISING );
  attachInterrupt(14, count, RISING );
  Serial.begin(9600);
}

void loop(){
	
	

	digitalWrite(2,HIGH);
	delay(1000);
	digitalWrite(2,LOW);
	delay(1000);
	
	
}


void count() {
  i++;
  Serial.println(String(i));
  
}
