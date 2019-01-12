int i;


void setup(){
	pinMode(2,OUTPUT);
	pinMode(5,INPUT);
  Serial.begin(9600);
}

void loop(){
	
	
	if(digitalRead(5)){
		i++;
		Serial.println(String(i));
	}
	
	digitalWrite(2,HIGH);
	delay(1000);
	digitalWrite(2,LOW);
	delay(1000);
	
	
}
