


void setup(){
	Serial.begin(9600);
	int i = 2;
  
	Serial.println("Value of i before square(i) is : "+ String(i));
	square(&i);
	Serial.println("Value of i just after square(i) is : "+ String(i));
}


void loop(){   }

void square(int *number){
	*number = *number * *number;
}

//void square_p(int * number){
//	*number = *number * *number;
//}
