int analogValue;
float voltage;
float temperature;

void setup(){
	
	Serial.begin(115200);
	
	Serial.println("Reading temperature :");
	
}

void loop(){
	
	analogValue = analogRead(A0);
	voltage = analogValue * 3.3/1023.0;
	temperature = voltage *100 ;
	Serial.print(String(voltage) + "V.  ");
	Serial.println(String(temperature) + "C");
	
}
