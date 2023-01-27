int sensor = A1;
int redled = 12;
int greenled = 13;
int pump=10;
#define REF 700
void setup()
{
pinMode(sensor,INPUT);
pinMode(redled,OUTPUT);
pinMode(greenled,OUTPUT);
pinMode(pump,OUTPUT);
}
}
void loop()
{
intsensor_value = analogRead (sensor);
if (sensor_value>REF)
{
digitalWrite(greenled,HIGH);
digitalWrite(redled,HIGH);
digitalWrite(pump,HIGH);
delay(1000);
}
else
{
digitalWrite(greenled,LOW);
digitalWrite(redled,LOW);
digitalWrite(pump,LOW);
delay(1000);
}
}
