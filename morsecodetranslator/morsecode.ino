#define beep 7
void setup() {
  Serial.begin(9600);
  pinMode(beep,OUTPUT);
  //+ve to digital pin, -ve grounded

}
String a;


void loop()
{
  Serial.println("Enter a sentence");
  while(Serial.available()) 
    a=Serial.readString();
  a.toLowerCase();  
  for(int i=0;i<a.length();i++)
  {
    char c=a.charAt(i);
    translate(c);
    delay(600);
  }
Serial.println(a);
delay(7000);
}

void translate(char c)
{
    // a dot is one unit
    // a dash is three units
    // the space between the parts of one letter is one unit
    // the space between letters is three units
    //the space between words is seven units
    //here, 1 unit = 200
    if(c=='a')//dot dash
    {
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
    }
    if(c=='b')//dash dot dot dot
    {
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
    }
    if(c=='c')//dash dot dash dot
    {
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
    }
    if(c=='d')//dash dot dot
    {
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
    }
    if(c=='e')//dot
    {
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
    }
    if(c=='f')//dot dot dash dot
    {
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
    }
    if(c=='g')//dash dash dot
    {
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
    }
    if(c=='h')//dot dot dot dot
    {
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
    }
    if(c=='i')//dot dot
    {
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
    }
    if(c=='j')//dot dash dash dash
    {
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
    }
    if(c=='k')//dash dot dash
    {
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
    }
    if(c=='l')//dot dash dot dot
    {
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
    }
    if(c=='m')//dash dash
    {
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
    }
    if(c=='n')//dash dot
    {
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
    }
    if(c=='o')//dash dash dash
    {
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
    }
    if(c=='p')//dot dash dash dot
    {
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
    }
    if(c=='q')//dash dash dot dash
    {
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
    }
    if(c=='r')//dot dash dot
    {
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
    }
    if(c=='s')
    {
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      
    }
    if(c=='t')//dash
    {
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
    }
    if(c=='u')//dot dot dash
    {
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
    }
    if(c=='v')//dot dot dot dash
    {
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
    }
    if(c=='w')//dot dash dash
    {
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
    }
    if(c=='x')//dash dot dot dash
    {
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
    }
    if(c=='y')//dash dot dash dash
    {
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
    }
    if(c=='z')//dash dash dot dot
    {
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
    }
    if(c=='1')//dot dash dash dash dash
    {
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
    }
    if(c=='2')//dot dot dash dash dash
    {
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
    }
    if(c=='3')//dot dot dot dash dash
    {
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
    }
    if(c=='4')//dot dot dot dot dash
    {
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
    }
    if(c=='5')//dot dot dot dot dot
    {
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
    }
    if(c=='6')//dash dot dot dot dot
    {
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
    }
    if(c=='7')//dash dash dot dot dot
    {
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
    }
    if(c=='8')//dash dash dash dot dot
    {
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
    }
    if(c=='9')//dash dash dash dash dot
    {
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(200);
      digitalWrite(beep,0);
    }
    if(c=='0')//dash dash dash dash dash
    {
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
      delay(200);
      digitalWrite(beep,1);
      delay(600);
      digitalWrite(beep,0);
    }
    
    if(c==' ')    
      delay(1400);
}
