#define in1 6
#define in2 7
#define in3 8
#define in4 9
#define irl 2
#define irr 3
void setup() {
  Serial.begin(9600);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(irl,INPUT);
  pinMode(irr,INPUT);

}

void loop()
{

  int l=digitalRead(irl);
  int r=digitalRead(irr);
  if(r==0&&l==0)
    forward();
  else if(r==1&&l==1)
    stopp();
  else if(r==1)
    right();
  else if(l==1)
    left();
  
   
    
}


void forward() {
  digitalWrite(in1,0);
  digitalWrite(in2,1);
  digitalWrite(in3,1);
  digitalWrite(in4,0);
}
/*void backward() {
  digitalWrite(in1,1);
  digitalWrite(in2,0);
  digitalWrite(in3,0);
  digitalWrite(in4,1);
}*/
void left()
{
  digitalWrite(in1,0);
  digitalWrite(in2,1);
  digitalWrite(in3,0);
  digitalWrite(in4,0);
}
void right()
{
  digitalWrite(in1,0);
  digitalWrite(in2,0);
  digitalWrite(in3,1);
  digitalWrite(in4,0);
}

void stopp(){

   digitalWrite(in1,0);
  digitalWrite(in2,0);
  digitalWrite(in3,0);
  digitalWrite(in4,0);
  
  }
