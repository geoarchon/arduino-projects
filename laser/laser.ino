#define ldr A5
#define laser 7
#define buzz 6
void setup() {
  pinMode(ldr,INPUT);
  pinMode(laser,OUTPUT);
  pinMode(buzz,OUTPUT);
  Serial.begin(9600);
}

void loop() {

  digitalWrite(laser,1);
  int x=analogRead(ldr);
  Serial.println(x);
  if(x<50)
    digitalWrite(buzz,1);
  else if(x>=50)
    digitalWrite(buzz,0);
  delay(200);

}
