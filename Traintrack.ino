 #define d1 2
#define d2 3
#define inp1 4
#define inp2 5
#define buzzer 7
int temp=0,i,ir=0;
boolean Serial_status=0;
int counter=0;
void setup()
{
Serial.begin(9600);//baudrate bps
pinMode(buzzer, OUTPUT);
pinMode(d1, OUTPUT);
pinMode(d2, OUTPUT);
pinMode(inp1, INPUT_PULLUP);
pinMode(inp2,INPUT_PULLUP);
delay(2000);
digitalWrite(buzzer,HIGH);
delay(1000);
digitalWrite(buzzer,LOW);
delay(1000);

}
void loop()
{
int in1=digitalRead(inp1);
int in2=digitalRead(inp2);
if(in1==HIGH)
{
digitalWrite(buzzer, HIGH);
digitalWrite(d1, LOW);
digitalWrite(d2, LOW);
//tracking();
}
else if(in2==HIGH)
{
digitalWrite(buzzer, HIGH);
digitalWrite(d1, LOW);
digitalWrite(d2, LOW);
//tracking1();
}
else
{
digitalWrite(buzzer, LOW);
digitalWrite(d1, HIGH);
digitalWrite(d2, HIGH);
}
delay(100);
}

void init_sms()
{
Serial.println("AT+CMGF=1");
delay(400);
Serial.println("AT+CMGS=\"+919573410068\"");
delay(400);
}
void init_sms1()
{
Serial.println("AT+CMGF=1");
delay(400);
Serial.println("AT+CMGS=\"+919573410068\"");
delay(400);
}

void send_data(String message)
{
Serial.println(message);
delay(200);
}
