#include <ESP8266WiFi.h>

const char* ssid     = "********";         // The SSID (name) of the Wi-Fi network you want to connect to
const char* password = "********";     // The password of the Wi-Fi network

WiFiServer server(80);
String  mClientRequest;

void setup() {
  // put your setup code here, to run once:
  mClientRequest = "";
  Serial.begin(115200);
  
  Serial.println("START");
   WiFi.begin(ssid,password);
  while ((!(WiFi.status() == WL_CONNECTED))){
    delay(300);
    Serial.print("..");
  }

  Serial.println("Connected");
  Serial.println("Your IP is");
  Serial.println((WiFi.localIP()));
  
  pinMode(2,OUTPUT);
  
  
  server.begin(); // Server Http begin.
}

void loop() {
  // put your main code here, to run repeatedly:
  
    WiFiClient client = server.available();
    if (!client) { return; }
    
   if (!client) { return; }
    while(!client.available()){  delay(1); }
    mClientRequest = client.readStringUntil('\r');
    client.flush();
	  if(mClientRequest.indexOf("LEDON")>0){
      digitalWrite(2,!digitalRead(2));
    }
    Serial.println(mClientRequest);
	
	
  	
  	String html ="<!doctype html><html><head><title>HTML Editor - Full Version</title></head>\r\n<body><h1 style=\"text-align: center;\">HTML Editor - Full Version</h1><p style=\"text-align: center;\">It&#39;s good to see you again.</p><p style=\"text-align: center;\"><a href=\"LEDON\"><input name=\"On Button\" type=\"button\" value=\"LED ON\" /></a>&nbsp; &nbsp; &nbsp; &nbsp;&nbsp;<a href=\"LEDOFF\"><input name=\"Off Button\" type=\"button\" value=\"LED OFF\" /></a></p></body></html>";
	
  	client.println("HTTP/1.1 200 OK");
    client.println("Content-Type: text/html");
    client.println("");
  	client.println(html);
    html = "";


    client.stop();  


}
