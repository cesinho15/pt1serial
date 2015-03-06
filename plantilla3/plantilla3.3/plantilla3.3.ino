void setup()                // executar nomes 1 cop al començar la simulació
{
  Serial.begin(9600);       // estableix la velocitat de dades per transmisió 9600 bps
}

void loop()                 // s'executa tota l'estona
{
  Serial.println("Hello world!");  // imprimeix en format de llista, en canvi el print imprimeix en forma de text
  delay(1000);
}

