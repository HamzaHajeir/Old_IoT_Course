String myName = "HamzaHajeir";
String myBirthYear = "1995";

void setup(){
	Serial.begin(9600);
  Serial.println("myName variable =" + myName );
  
	myName.toUpperCase();
	int birthDate = myBirthYear.toInt();
  
	

	Serial.println("myNameCaps variable =" + myName );
	Serial.println("myBirthYear variable =" + myBirthYear );
	Serial.println("I am "+ String(2019-birthDate) +" Years old." );
	
}

void loop(){
	
	
}
