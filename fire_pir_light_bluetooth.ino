char data = 0; 

#define FIRE 8 // input fire sensor
#define HOME 9 // input pir sensor
#define RDBLB 10 // output fire sensor
#define BUZZER 11 // output fire sensor
#define RDBLB1 6  // output pir sensor
#define BUZZER1 7 //// output pir sensor        
void setup() 
{
Serial.begin(9600);        
pinMode(2, OUTPUT);   // relay 1 output
pinMode(3, OUTPUT);   // relay 2 output
pinMode(4, OUTPUT);    // relay 3 output
pinMode(5, OUTPUT);    // relay 4 output
pinMode(6, OUTPUT);   // output pir sensor
pinMode(7, OUTPUT);   // output pir sensor
pinMode(8, INPUT_PULLUP);  //input fire sensor
pinMode(9, INPUT_PULLUP);  // input pir sensor
pinMode(10, OUTPUT);    // output fire sensor
pinMode(11, OUTPUT);    // output fire sensor
  
}
void loop()
{
if(Serial.available() > 0)  
{
data = Serial.read();      
Serial.print(data);        
Serial.print("\n");        
if(data == 'A')             
digitalWrite(3, LOW);   // Turn relay 1 ON
else if(data == 'a')     
digitalWrite(3, HIGH);    // Turn relay 1 OFF
  if(data == 'B')             
digitalWrite(4, LOW);   // Turn relay 2 ON
else if(data == 'b')     
digitalWrite(4, HIGH);    // Turn relay 2 OFF
if(data == 'C')             
digitalWrite(5, LOW);   // Turn relay 3 ON
else if(data == 'c')     
digitalWrite(5, HIGH);    // Turn relay 3 OFF
if(data == 'D')             
digitalWrite(2, LOW);   // Turn relay 4 ON
else if(data == 'd')     
digitalWrite(2, HIGH);    // Turn relay 4 OFF  
}

 int FIREVAL = digitalRead(FIRE);
 

if(FIREVAL == 0) { digitalWrite(RDBLB,LOW); digitalWrite(BUZZER,HIGH); Serial.println("FIRE HAS BEEN DETECTED"); }
else {  digitalWrite(RDBLB,HIGH); digitalWrite(BUZZER,LOW); Serial.println("NO FIRE "); }


 int HOMEVAL = digitalRead(HOME); 
if(HOMEVAL == LOW) { digitalWrite(RDBLB1,LOW); digitalWrite(BUZZER1,HIGH); Serial.println("SOMEBODY HAS ENTERED IN HOUSE");}
else {  digitalWrite(RDBLB1,HIGH); digitalWrite(BUZZER1,LOW); Serial.println("HOME SAFE"); }
  
 delay(1000);                         
}