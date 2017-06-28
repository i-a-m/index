#VCC接 arduino 的3.3或5V
#GND接 arduino的GND
#DO 接 arduino的Digital 2
#AO 接 arduino的Analog 0


#define PIN_A 0
#define PIN_D 2

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  int val;
  val=analogRead(PIN_A);
  Serial.print("a:");
  Serial.print(val);
  Serial.print(", d:");
  val=digitalRead(PIN_D);
  Serial.println(val);
  delay(500);
}
