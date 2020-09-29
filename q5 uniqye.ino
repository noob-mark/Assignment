//uniqueness
void setup()
{
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
 
  
}

void loop()
{
digitalWrite(6, HIGH);
digitalWrite(8, HIGH);
  delay(500);
for(int i=0;i<1;i++){
digitalWrite(7, HIGH);
 digitalWrite(10, HIGH);
  delay(500);
   digitalWrite(7, LOW);
 digitalWrite(10, LOW);
  delay(500);
}
digitalWrite(7, HIGH);
 digitalWrite(10, HIGH);
  delay(500);

for(int i=0;i<2;i++){
	digitalWrite(9, HIGH);
  digitalWrite(11, HIGH);
delay(500);
   digitalWrite(9, LOW); 
  digitalWrite(11, LOW);
  delay(500);
}
digitalWrite(9, HIGH);
  digitalWrite(11, HIGH);
delay(500);

or(int i=0;i<3;i++){
	digitalWrite(13, HIGH);
 digitalWrite(12, HIGH);
  delay(500);
   digitalWrite(13, LOW);
 digitalWrite(12, LOW);  
delay(500);
}

digitalWrite(13, HIGH);
 digitalWrite(12, HIGH);
  delay(500);

digitalWrite(13, LOW);
 digitalWrite(12, LOW);  
delay(500);

  digitalWrite(9, LOW); 
  digitalWrite(11, LOW);
  delay(500);

digitalWrite(6, LOW);
digitalWrite(8,LOW);
  delay(500);



}