void setup()                // executar nomes 1 cop al començar la simulació
{
  Serial.begin(9600);       // estableix la velocitat de dades per transmisió 
  Serial.println("Escull el numero de l'operacio que vols realitzar?");     // imprimeix en format de llista
  delay(1000);                                                             // delay 1s
  Serial.println("1. Comprovar numero de tarjeta de credit");              // imprimeix en format de llista
  delay(1000);                                                             // delay 1s
  Serial.println("2. Comprovar numero de compte bancari");                 // imprimeix en format de llista
  delay(1000);                                                             // delay 1s
  Serial.println("3. Buscar un digit perdut de targeta de credit");        // imprimeix en format de llista
  
}

void loop()                 // s'executa tota l'estona
{
  
}

