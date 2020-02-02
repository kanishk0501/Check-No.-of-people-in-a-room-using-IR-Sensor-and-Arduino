int j;
int k;
int i;
int S1 = 7;
int S2 = 8;
int v1s;
int v2s;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(S1, INPUT);
pinMode(S2,INPUT);
pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

v1s = digitalRead(S1);
v2s = digitalRead(S2);
j = 0;
if (v1s==0){
  for (i=0;i<300;i++)
{
  if (v2s==0){
    j = j+1;
  }
  delay(10);
}
}
else if (v2s==0){
  for (k=0;k<300;k++)
{
  if (v1s==0){
    j = j-1;
  }
  delay(10);
}
}
Serial.println(j);
analogWrite(5,51*j);
}
