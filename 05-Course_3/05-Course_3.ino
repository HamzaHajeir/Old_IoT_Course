#include <ESP8266WiFi.h>

WiFiServer server(80);
String  mClientRequest;

void setup() {
  // put your setup code here, to run once:
  mClientRequest = "";
  Serial.begin(9600);
  
  Serial.println("START");
   WiFi.begin("ORANGE_D34C","RNJPDJUT");
  while ((!(WiFi.status() == WL_CONNECTED))){
    delay(300);
    Serial.print("..");
  }

  Serial.println("Connected");
  Serial.println("Your IP is");
  Serial.println((WiFi.localIP()));
  
  
  server.begin(); // Server Http begin.
}

void loop() {
  // put your main code here, to run repeatedly:
  
    WiFiClient client = server.available();
    if (!client) { return; }
    while(!client.available()){  delay(1); }
	
    mClientRequest = client.readStringUntil('\r');
    client.flush();
	
	if(mClientRequest.indexOf("message")>0){
		digitalWrite(2,HIGH);
	}
	
	client.println("HTTP/1.1 200 OK");
    client.println("Content-Type: text/html");
    client.println("");
	
    client.println("<!DOCTYPE HTML>");
    client.println("<html>");
    client.println("<head>");
    client.println("</head>");
    client.println("<body>");
		client.println("<h1 style=""color:#ff0000"">");
        client.println("Hello World!"); 		//Title
        client.println("</h1>");                         
    client.println("</body>");
    client.println("</html>");
    client.stop();

}
