Ultra sonic based Alarm system

#define trigger 2
#define Echo 3
#define LedRed 4
#define LedGreen 5 
#define soundbuzzer 6
int sound = 500;


void setup() {
  Serial.begin (9600);
  pinMode(trigger, OUTPUT);
  pinMode(Echo, INPUT);
  pinMode(LedRed, OUTPUT);
  pinMode(LEDlampGreen, OUTPUT);
  pinMode(soundbuzzer, OUTPUT);
}
void loop() {
  long duration, distanceinCM;
  digitalWrite(trigger, LOW); 
  delay(2);
  digitalWrite(trigger, HIGH);
  delay(10);
  digitalWrite(trigger, LOW);
  duration = pulseIn(Echo, HIGH);
  distanceinCM = (duration/5) / 29.1;


if(distanceinCM>15){
digitalWrite(LedGreen,HIGH);
	}
else{
digitalWrite(LedGreen,LOW);
}
 
if (distance < 15) {
    digitalWrite(LedRed, HIGH);
    sound = 1000;
}
  else {
    digitalWrite(LedRed,LOW);
  }
 
  if (distanceincm > 5 || distanceinsm <= 0){
    Serial.println("Outside the permissible range of distances");
    noTone(soundbuzzer);
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
    tone(buzzer, sound);
  }
  
  delay(300);
}