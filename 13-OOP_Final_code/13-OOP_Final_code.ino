

class Car{
  
  String brand;
  String model;
  String yearOfM;
  String color;
  int engineS;


	public : 
    
    Car (String brandName, String modelName):
      brand(brandName),
      model(modelName)      
    { 
      }
      
		Car (String brandName, String modelName, String yearOfManufacture, String colorName, int engineSize):
			brand(brandName),
			model(modelName),
			yearOfM(yearOfManufacture),
			color(colorName),
		  engineS(engineSize)
			
		{
		
		}


	void runTheCar(){

		Serial.printf("Car %s %s which Engine size=%d and %s colored is now running\n",brand.c_str() , yearOfM.c_str() , engineS,color.c_str());	
		
		}

  void setBrandName(String newName){
    brand = newName;
  }



};

Car myCar("Hyundai","Accent","1997","White",1500);
Car myFriendsCar("Ford","Fusion","2015","Silver",1600);

Car thirdCar("BMW","350i");

void setup(){
	Serial.begin(115200);
	Serial.println("Hello");
	
	myCar.runTheCar();
	myFriendsCar.runTheCar();
  delay(500);
  myCar.setBrandName("Toyota");
  myCar.runTheCar();
  delay(1000);
  thirdCar.runTheCar();
}

void loop(){

}
