int num = 64;

void setup()             // run once, when the sketch starts
{
  Serial.begin(9600);    // set up Serial library at 9600 bps

  Serial.println("Diferents maneres de representar un numero");

  Serial.write(num);
  Serial.println( );
  
  Serial.println("decimal");
  Serial.println(num,DEC);
  
   Serial.println("Binari");
  Serial.println(num,BIN);
  
   Serial.println("Hexadecimal");
  Serial.println(num,HEX);
  
   Serial.println("Octodecimal");
  Serial.println(num,OCT);
}

void loop()   // we need this to be here even though its empty
{
}

