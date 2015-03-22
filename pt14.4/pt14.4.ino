int EEE=3; // si variem la variable KgCO2/m2 podem comprovar el funcionamet.

void setup()              // run once, when the sketch starts
{
Serial.begin(9600);     // set up Serial library at 9600 bps
  
switch (EEE )  { //estructura switch case
   case A:
    Serial.print("Clase A");
          //Primera clase
      break;
   
    default: 
      // if nothing else matches, do the default
      // default is optional
  }
}  
  void loop()   // we need this to be here even though its empty
{
}
