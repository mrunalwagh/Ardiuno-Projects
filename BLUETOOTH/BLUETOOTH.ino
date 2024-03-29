/* Sample code-2 */
/* Program to Receive data from Bluetooth to Arduino and show on serial monitor */

int ledPin= 13;        // global decleration;
char input;  
  
void setup() 
{  
  Serial.begin(9600);          //set baudrate for serial communication;
  pinMode(ledPin, OUTPUT);     //define pin functionality; 
  Serial.println(">> START<<");  
}  
  
void loop() 
{     
  if(Serial.available()>0)     // check the buffer;
  {  
    input = Serial.read();      // if condition true read the data;
    if(input=='1')             //condition is true;
    {  
      digitalWrite(ledPin, HIGH);
      Serial.println("LED is ON");      //led will be on;
      delay(2000);  
    }  
    else if(input=='0')                 //condition is true;
    {  
      digitalWrite(ledPin, LOW);
      Serial.println("LED is OFF");     //led will be off;
      delay(2000);  
    }  
    else                                //otherwise invalid input;
    {  
      Serial.print(" Invalid INPUT: ");  
      Serial.println(input);  
    }  
  }  
}
