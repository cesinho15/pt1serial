int sensorReading = 4; 
// si canviem el valor del sensorReading podriem anar activan els diferents case que tenim en aquet cas tenim programat al sensor un 4 com que no hi ha cap case amb 4 ens donarà default. 

void setup()
{
  Serial.begin(9600);
  Serial.print("El dia es "); 
   
  switch (sensorReading) {
  case 0:    //si sensorReading es 0 s'activa case 0 (fosc)
    Serial.println("fosc");
    break;
  case 1:    //si sensorReading es 1 s'activa case 1 (enfosquit)
    Serial.println("enfosquit");
    break;
  case 2:    //si sensorReading es 2 s'activa case 2 (mitja)
    Serial.println("mitja");
    break;
  case 3:      //si sensorReading es 3 s'activa case 3 (brillant)
    Serial.println("brillant");
    break;
  default:     //si sensorReading es un numero a 0,1,2,3 s'activa default (...no ho se!!!)
    Serial.println("... No ho se!!!");
  } 
}
void loop()
{
}

