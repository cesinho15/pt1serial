float EEE = 7.5;

void setup()              // run once. when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( EEE < 3.5)
  {
    Serial.print("Clase A");
  } 
 
 else if ( EEE < 6.5)
  {
    Serial.print("Clase B");
  } 

else if ( EEE < 11.1)
  {
    Serial.print("Clase C");
  } 

else if ( EEE < 17.7)
  {
    Serial.print("Clase D");
  } 

else if ( EEE < 38.2)
  {
    Serial.print("Clase E");
  } 

else if ( EEE < 43.2)
  {
    Serial.print("Clase F");
  } 

else if ( EEE >= 43.2)
  {
    Serial.print("Clase G");
  }
}
void loop()   // we need this to be here even though its empty
{
}
