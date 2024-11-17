int readPin[]={A0,A1,A2,A3};
int readVal[]={0.,0.,0.,0.};
float V[]={0.,0.,0.,0.};
int relayPin[]={10,11,12,9};
int dealyTime=500;
void setup() {
  // put your setup code here, to run once:
for (int i=0; i<4; i++)
{
pinMode(readPin[i],INPUT);
pinMode(relayPin[i],OUTPUT);
}
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

for (int i=0; i<4; i++)
{
readVal[i]=analogRead(readPin[i]);
V[i]=(5./1023.)*readVal[i]; // read voltages
Serial.print("V("); // print voltages
Serial.print(i);
Serial.print(")=");
Serial.println(V[i]);
delay(dealyTime);
}
float min = V[0]; // search minimum in VoltageArray from index 0 to elementCount-1 
    for(int j=0; j<4; j++)
    {
        if(V[j]<min)
        {
            min=V[j];
        }
    }
for (int k=0; k<4; k++)
{
  if(min<V[k]>4.2)
  {
    digitalWrite(relayPin[k],HIGH);
  }
  else
  {
    digitalWrite(relayPin[k],LOW);
  }
}
}
