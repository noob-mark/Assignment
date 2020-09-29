// UltraSOnic Based object detection
#define trigger 2
#define Echo 3
#define LM1 5
#define LM2 6
#define RM1 10
#define RM2 11
int speed = 50;
void setup()
{
    pinMode(trigger,OUTPUT);
    pinMode(Echo,INPUT);
    pinMode(LM1,OUTPUT);
    pinMode(LM2,OUTPUT);
    pinMode(RM1,OUTPUT);
    pinMode(RM2,OUTPUT);
}

void loop()
{
 digitalWrite(RM1,speed);
 digitalWrite(LM1,speed);
 long duration,distanceinCM;
digitalWrite(trigger,LOW) ;
delay(2);
digitalWrite(trigger,HIGH) ;
delay(10);
digitalWrite(trigger,LOW);
duration = pulseIn(ECHO,HIGH);
distanceinCM = (duration/2)/29.1;
 
 if(distanceinCM < 15)
 {
     if(speed< 255)
    {   
     speed = speed + 10
    }
    digitalWrite(LM1,speed);
    digitalWrite(RM1,speed);
    delay(100); 
 }
if(distanceincm > 15 || distanceinsm <= 0 )
{
    if(speed>=20)
    {
        speed=speed-10;
    }
    digitalWrite(RM1,speed);
    digitalWrite(LM1,speed);
    delay(100);
}
}