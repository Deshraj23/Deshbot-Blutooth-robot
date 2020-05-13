
byte datarx;
int moter1 = 8;
int moter2 = 9;
int moter3 = 7;
int moter4 = 6;
 void setup() {
  Serial.begin(9600);    // initialize serial:
  pinMode(moter1, OUTPUT);
  pinMode(moter2, OUTPUT);
  pinMode(moter3, OUTPUT);
  pinMode(moter4, OUTPUT);}
void loop() {
  if (Serial.available() > 0) // if there's any serial available, read it:
{datarx=Serial.read();}
if(datarx=='U')
{forward();}
if(datarx=='D')
{Reverse(); }
if(datarx=='L')
{left();}
if(datarx=='R')
{right();}
if(datarx=='C')
{stop();}
if(datarx=='a')
{datarx=0; digitalWrite(10, HIGH); }
if(datarx=='c')
{datarx=0; digitalWrite(10, LOW);  }

}


void forward()
{ 
 digitalWrite(moter1, HIGH); 
 digitalWrite(moter2, LOW); 
 digitalWrite(moter3, HIGH); 
 digitalWrite(moter4, LOW);
}
void Reverse()
{
 
 digitalWrite(moter1, LOW); 
 digitalWrite(moter2, HIGH); 
 digitalWrite(moter3, LOW); 
 digitalWrite(moter4, HIGH);
 }
void left()
{

 digitalWrite(moter1, HIGH); 
 digitalWrite(moter2, LOW); 
 digitalWrite(moter3, LOW); 
 digitalWrite(moter4, LOW);

}
void right()
{
 
 digitalWrite(moter1, LOW); 
 digitalWrite(moter2, LOW); 
 digitalWrite(moter3, HIGH); 
 digitalWrite(moter4, LOW);
 }
void stop()
{
 
 digitalWrite(moter1, LOW); 
 digitalWrite(moter2,LOW); 
 digitalWrite(moter3, LOW); 
 digitalWrite(moter4, LOW);
}
