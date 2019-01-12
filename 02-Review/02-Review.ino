#define BUTTON_PIN 5
const String a="ss";
int globalVariable;

void setup(){
	pinMode(BUTTON_PIN,INPUT);
	
}

void loop(){
	
	boolean buttonState = digitalRead(BUTTON_PIN);
	
	function(buttonState);
	
}

void function(boolean state){
	if(state){
		globalVariable++;	
	}
}
