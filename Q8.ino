#define trigger 2
#define Echo 3
#define Enable 4
#define M1 6
#define M2 10

void Setup()
{
   pinMode(trigger,OUTPUT);
   pinMode(Echo,INPUT);
   pinMode(Enable,OUTPUT);
   pinMode(M1,OUTPUT);
   pinMode(M2,OUTPUT);
   Serial.begin(9600);
}

void Loop()
{
   long duration,distance;
   digitalWrite(trigger,LOW);
   delay(2);
   digitalWrite(trigger,HIGH);
   delay(10);
   digitalWrite(trigger,LOW);
   duration = pulseIn(Echo,HIGH)   ;
   distance = (duration/2)/29.1;
   if(distance <=5)
   {  //gate openeing
      digitalWrite(Enable,HIGH);
      delay(50);
      digitalWrite(M1,50);
      digitalWrite(M2,0);
      delay(2000);
      digitalWrite(M1,0);
      digitalWrite(M2,0);
      delay(1000);

      Serial.println("Please Enter");
      //gate closing
      delay(2000);
      digitalWrite(M1,0);
      digitalWrite(M2,50);


   }
   else
   {
       digitalWrite(Enable,LOW);
       digitalWrite(M1,0);
       digitalWrite(M2,0);
   }
}