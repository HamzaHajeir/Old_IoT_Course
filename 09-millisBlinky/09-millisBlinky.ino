int i;
unsigned long prevmillis;
unsigned long button_millis;
void setup(){
	pinMode(2,OUTPUT);
	pinMode(5,INPUT);
  Serial.begin(9600);

}

void loop(){
	
	
	if(digitalRead(5)==HIGH && millis() - button_millis > 100){
		i++;
		Serial.println(i);
    button_millis = millis();
	}
	
	if(millis() - prevmillis > 1000){
	digitalWrite(2,!digitalRead(2));
	prevmillis = millis();
	}
	
	
}
