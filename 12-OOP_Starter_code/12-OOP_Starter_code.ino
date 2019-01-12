class Car{
   
        String brand;
        String model;

	public : 
		Car (String brandName, String modelName):
			brand(brandName),
			model(modelName)			
		{ }
	void runTheCar(){
    Serial.println("Car : " + brand + model +" is now running"); 
	}
 
  void setBrandName(String newName){
    brand = newName;
  }
};

Car myCar("Hyundai", "Accent");
Car myFriendsCar("Ford","Fusion");

void setup(){
	Serial.begin(115200);
	Serial.println("Hello");
	
	myCar.runTheCar();
	myFriendsCar.runTheCar();
 
  delay(500);
  
  myCar.setBrandName("Toyota");
  myCar.runTheCar();
}

void loop(){

}
