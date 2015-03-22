void setup()              // executar nomes 1 cop al començar la simulació
{
  Serial.begin(9600);    // estableix la velocitat de dades per transmisió 9600 bps
  
}

void loop()                     // s'executa tota l'estona
{
  Serial.print("Hello world!"); // imprimeix "hello word!" en format de text cada 1s
  delay(1000);
}

