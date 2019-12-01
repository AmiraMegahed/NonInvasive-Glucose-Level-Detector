int senRead= 0;
int val = 0;
int glucoselevel = 0;
/*
int arr[50];
int counterelements = 0;
int correctedglucoselevel = 0;
*/
void setup() 
{
  Serial.begin(9600);
}

/*
int average(int arry[50])
{
  int sum = 0;
  int avg = 0;
  for(int i =0; i<50; i++)
  {
     sum = sum + arry[i];
  }
  avg = sum / 50;
  return avg;
}
*/
void loop() 
{ 
  val = analogRead(senRead);
  glucoselevel = (8*pow(10,-5)*pow(val,2))+ (0.1873*val) + 46.131;
  /*
  arr[counterelements] = glucoselevel;
  if(counterelements == 49)
  {
    correctedglucoselevel= average(arr);
    Serial.print("Glucose Level = ");
    Serial.println(correctedglucoselevel);
    counterelements = 0;
  }
  counterelements++;
  */
  Serial.print("Glucose Level = ");
  Serial.println(glucoselevel);
  delay(1000);
}


