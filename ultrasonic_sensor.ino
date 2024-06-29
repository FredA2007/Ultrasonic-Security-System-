int trig = 7;// output pin
int echo = 6; //input pin
int timeInMicro;

int distanceInCm;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(7,OUTPUT);
  pinMode(6,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig,LOW);
delayMicroseconds(2);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);

//receiving at echo
timeInMicro = pulseIn(echo,HIGH);//shows time interval to send
distanceInCm = timeInMicro /29 /2;//microseconds per cm is 29
Serial.println(distanceInCm);

}
