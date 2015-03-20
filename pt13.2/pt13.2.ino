int thisByte = 33; 

void setup() 
{ 
  Serial.begin(9600); 
  Serial.println("Taula ASCII ~ Mapa de caràcters"); 
} 

void loop()
{ 
  Serial.write(thisByte);    
  
  Serial.print(", dec: "); 
  Serial.print(thisByte);      
  Serial.print(", hex: "); 
  Serial.print(thisByte, HEX);     
  Serial.print(", oct: "); 
  Serial.print(thisByte, OCT);     
  Serial.print(", bin: "); 
  Serial.println(thisByte, BIN);   

  if(thisByte == 126)  // si l'últim caràcter visible impresa farem alguna acció
  { 
    while(true) // pararem el while loope
    { 
    } 
  } 
  thisByte++;     // ir al siguiente carácter

} 

